#pragma once
#include "../model/model_document.hpp"
#include "../model/model_primitive.hpp"
#include "../model/model_rectangle.hpp"
#include "../model/model_square.hpp"
#include <memory>
#include <iostream>
#include <string>

class Controller
{
    protected:
    static inline Document* document;
    static inline std::vector<std::shared_ptr<Document>> documents;

};