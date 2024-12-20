#include "controller_primitive.hpp"
#include "controller.hpp"

void TypeToCreate(int variant, size_t number, Document &doc)
{
    switch(variant)
    {
        case 1:
        {
            // rectangle
            std::shared_ptr<Rectangle> rec = std::make_shared<Rectangle>(number);
            std::cout << "Create in document №" << doc.getNumber() << ": ";
            doc.addPrimitive(rec);
            std::cout << std::endl;
            break;
        } 
        case 2: 
        {
            // square
            std::shared_ptr<Square> squ = std::make_shared<Square>(number);
            std::cout << "Create in document №" << doc.getNumber() << ": ";
            doc.addPrimitive(squ);
            std::cout << std::endl;
            break;
        }
        
    }
}
void ControllerPrimitive::CreatePrimitive(int variant, size_t number)
{
    for (auto j : document->getPrimitives())
    {
        if (j->getNumber() == number)
        {
            std::cout << "Already exist" << std::endl;
            return;
        }
    }
    TypeToCreate(variant, number, *document);
}
void ControllerPrimitive::DeletePrimitive(int index)
{
    std::cout << "Delete in document №" << document->getNumber() << ": ";
    document->deletePrimitive(index);
    std::cout << std::endl;
}

void ControllerPrimitive::AllPrimitives()
{
    std::cout << document->getPrimitivesStr();
}

