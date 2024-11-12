#include <iostream>
#include "OOP.hpp"

#include "CLibrary.hpp"

OOP::OOP()
{
    addToProjects("OOPProject", "Library Management to show encapsulation, inheritance, polymorphism and abstraction");
}

void OOP::startApp()
{
    std::cout << "Output from OOPProject" << std::endl;
}