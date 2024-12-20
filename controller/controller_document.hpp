#pragma once
#include "controller.hpp"
#include <iostream>
#include <fstream>
class ControllerDocument : Controller
{
    public:
        void newDocument(size_t number);
        void exportDocument();
        void switchDocument(size_t number);
        void importDocument(std::string filepath);
        void AllPrimitives();
};