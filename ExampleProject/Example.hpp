#pragma once

#include <functional>
#include <string>
#include <vector>


class Example
{
public:
    Example(std::vector<std::pair<std::string, std::function<void()>>>& projects);
private:
    void doStuff();

    std::string m_someString{ "someText" };
};
