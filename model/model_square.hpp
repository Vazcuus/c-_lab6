#pragma once
#include "model_primitive.hpp"


class Square : public Primitive
{
    public:
        Square(size_t number);
        Square() = default;
        ~Square() = default;
        void Print() override;
        std::string getOutput();
        size_t getNumber();
        
};
