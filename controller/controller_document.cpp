#include "controller_document.hpp"

void ControllerDocument::newDocument(size_t number)
{
    for (auto i : documents)
    {
        if (i->getNumber() == number)
        {
            std::cout << "Already exist" << std::endl;
            return;
        }
    }
    std::shared_ptr<Document> temp = std::make_shared<Document>(number);
    documents.push_back(temp);
    document = &(*temp);
    std::cout << "Created new Document №" << documents.back()->getNumber() << std::endl;
};

void ControllerDocument::exportDocument()
{
    std::string filepath = "document";
    filepath+=std::to_string(document->getNumber()) +".txt";
    std::ofstream outDocument(filepath);
    if (outDocument.is_open())
    {
        outDocument << "In document" << document->getNumber() << ": " << document->getPrimitivesStr();
    }
    outDocument.close();
    std::cout << "Export a document №" << document->getNumber();
}

void ControllerDocument::importDocument(std::string filepath)
{
    std::cout << "-- Import a document --\n";
    std::ifstream importData(filepath);
    std::string read;
    if (importData.is_open())
    {
        while(std::getline(importData, read))
        {
            std::cout << read << std::endl;
        }
    }
    else std::cout << "Wrong filename\n";
}

void ControllerDocument::switchDocument(size_t number)
{
    for (auto i : documents)
    {
        if (number > documents.size())
        {
            std::cout << "Document not found" << std::endl;
            break;
        }
        if (i->getNumber() == number)
        {
            document = &(*i);
            std::cout << "Switch to Document №" << document->getNumber() << " now" << std::endl;
            break;
        }
    }
};
