#pragma once
#include "controller.hpp"

class ControllerPrimitive : Controller
{
    public:
        void CreatePrimitive(int variant, size_t number);
        void DeletePrimitive(int index);
        void AllPrimitives();
};