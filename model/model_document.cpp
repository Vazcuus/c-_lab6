#include "model_document.hpp"
Document::Document(size_t number)
{
    numberOfDocument = number;
}

size_t Document::getNumber() const
{
    return numberOfDocument;
}

void Document::addPrimitive(std::shared_ptr<Primitive> primitive)
{
    primitive->Print();
    primitives.push_back(primitive);
}

void Document::deletePrimitive(int index)
{
    if (index > primitives.size())
    {
        std::cout << "Index out" << std::endl;
        return;
    }
    index--;
    primitives[index]->Print();
    primitives.erase(primitives.begin()+index);
}
Document::Document(const Document &_document)
{
    numberOfDocument = _document.numberOfDocument;
    for (auto i = 0; i < _document.primitives.size(); i++)
    {
        primitives[i] = _document.primitives[i];
    }
}

std::string Document::getPrimitivesStr()
{
    std::string result;
    for (auto i : primitives)
    {
        result += i->getOutput() + " ";
    }
    return result;
}

std::vector<std::shared_ptr<Primitive>> Document::getPrimitives()
{
    return primitives;
}