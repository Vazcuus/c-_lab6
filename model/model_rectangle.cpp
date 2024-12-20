#include "model_rectangle.hpp"

void Rectangle::Print()
{
    std::ostringstream output;
    output << "Rectangle №" << number;
    _output = output.str();
    std::cout << output.str();
}


Rectangle::Rectangle(size_t _number)
{
    number = _number;
}

std::string Rectangle::getOutput()
{
    return _output;
}

size_t Rectangle::getNumber()
{
    return number;
}