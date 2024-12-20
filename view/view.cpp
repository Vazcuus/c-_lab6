#include "view.hpp"

void View::Selector(int variant)
{
    switch (variant)
    {
        case 1:
        {
            int number;
            std::cout << "Input the number document: ";
            std::cin >> number;
            std::cout << std::endl;
            controlDoc.newDocument(number);
            break;
        }
        case 2:
        {
            int number;

            std::cout << "Enter the number document: ";
            std::cin >> number;
            std::cout << std::endl;
            controlDoc.switchDocument(number);
            break;
        }
        case 3:
        {
            std::string filepath;
            std::cout << "Input filename: ";
            std::cin >> filepath;
            std::cout << std::endl;
            controlDoc.importDocument(filepath);
            break;
        }
        case 4:
        {
            controlDoc.exportDocument();
            break;
        }
        case 5:
        {
            int variant;
            int number;
            std::cout << "--- Choose a primitive ---" << "\n";
            std::cout << "1. Rectangle" << "\n";
            std::cout << "2. Square" << "\n";
            std::cin >> variant;

            if (variant > 2)
            {
                std::cout << "\nThere is no such variant" << std::endl;
                break;
            }

            std::cout << "Enter the number primitive: ";
            std::cin >> number;
            std::cout << std::endl;
            controlPrim.CreatePrimitive(variant, number);
            break;

        }
        case 6:
        {
            int index;
            std::cout << "-- Input index primitive --" << "\n";
            std::cin >> index;
            std::cout << std::endl;
            controlPrim.DeletePrimitive(index);
            break;    
        }  
        case 7:
        {
            std::cout << "\nList primitives in document: ";
            controlPrim.AllPrimitives();
            std::cout << std::endl;
            break;
        }
        case 8:
        {
            break;
        }
    }
}
void View::Run()
{

    int inputVariant;
    while (inputVariant != 8)
    {   
        std::cout << "\n" << "--- Select an action ---" << "\n";
        std::cout << "1. Create new document" << "\n";
        std::cout << "2. Switch document" << "\n";
        std::cout << "3. Import document" << "\n";
        std::cout << "4. Export document" << "\n";
        std::cout << "5. Create new primitive" << "\n";
        std::cout << "6. Delete new primitive" << "\n";
        std::cout << "7. Viewing primitives" << "\n";
        std::cout << "8. Exit" << "\n";

        std::cin >> inputVariant;
        Selector(inputVariant);
    }
}