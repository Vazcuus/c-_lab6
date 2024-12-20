#include "model_square.hpp"

void Square::Print()
{
    std::ostringstream output;
    output << "Square №" << number;
    _output = output.str();
    std::cout << output.str();
}

Square::Square(size_t _number)
{
    number = _number;
}

std::string Square::getOutput()
{
    return _output;
}

size_t Square::getNumber()
{
    return number;
}