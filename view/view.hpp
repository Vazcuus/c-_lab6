#pragma once
#include <iostream>
#include <iomanip>
#include "../controller/controller_document.hpp"
#include "../controller/controller_primitive.hpp"
class View
{
    public:
        void Run();
        void Selector(int variant);

    private:
    ControllerDocument controlDoc;
    ControllerPrimitive controlPrim;
};