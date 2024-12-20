#pragma once
#include <vector>
#include "model_primitive.hpp"
#include <iostream>

class Document
{
    public:
    Document() = default;
    Document(size_t number);
    Document(const Document &_document);
    
    void addPrimitive(std::shared_ptr<Primitive> primitive);
    void deletePrimitive(int index);

    std::string getPrimitivesStr();
    size_t getNumber() const;
    std::vector<std::shared_ptr<Primitive>> getPrimitives();
    
    private:
    size_t numberOfDocument;
    std::vector<std::shared_ptr<Primitive>> primitives;
};