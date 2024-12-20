#pragma once
#include "model_primitive.hpp"

class Rectangle : public Primitive
{
    public:
        Rectangle(size_t _number);
        Rectangle() = default;
        ~Rectangle() = default;

        void Print() override;
        std::string getOutput();
        size_t getNumber();

};