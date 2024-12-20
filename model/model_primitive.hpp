#pragma once
#include <iostream>
#include <memory>
#include <sstream>

class Primitive
{
    public:
    Primitive() = default;
    ~Primitive() = default;
    
    virtual void Print() = 0;
    virtual std::string getOutput() = 0;
    virtual size_t getNumber() = 0;

    protected:
    size_t number;
    std::string _output;
};
