#include <iostream>
#include "Example.hpp"

Example::Example()
{
    addToProjects("ExampleProject", "ExampleDescription");
}

void Example::startApp()
{
    std::cout << "Output from ExampleProject" << std::endl;
}