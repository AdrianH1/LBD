#include <iostream>
#include "Example.hpp"

Example::Example(std::vector<std::pair<std::string, std::function<void()>>>& projects)
{
    std::pair<std::string, std::function<void()>> somePair{ "exampleProject",  std::bind(&Example::doStuff, this) };
    projects.emplace_back(somePair);
}

void Example::doStuff()
{
    std::cout << "Output from ExampleProject: " << m_someString << std::endl;
}

// []() { std::cout << "some Output" << std::endl; }