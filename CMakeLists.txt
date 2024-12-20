cmake_minimum_required(VERSION 3.5.0)
project(lab6 VERSION 0.1.0 LANGUAGES C CXX)

add_executable(lab6 
    main.cpp
    controller/controller.cpp
    controller/controller_document.cpp
    controller/controller_primitive.cpp
    model/model_document.cpp
    model/model_primitive.cpp
    model/model_square.cpp
    model/model_rectangle.cpp
    view/view.cpp
)


