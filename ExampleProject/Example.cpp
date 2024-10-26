#include <iostream>
#include "Example.hpp"

Example::Example()
{
    addToProjects("ExampleProject");
}

void Example::startApp()
{
    std::cout << "Output from ExampleProject: " << m_someString << std::endl;
}

// []() { std::cout << "some Output" << std::endl; }