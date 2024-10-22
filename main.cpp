#include <iostream>
#include <vector>
#include <functional>

#include "OverallHelper.hpp"

#include "ExampleProject/Example.hpp"

namespace
{
projectList projects{};
bool run = false;
}

void stopApp()
{
    run = false;
}

int main(int argc, char const *argv[])
{
    projects.emplace_back("Stop App", stopApp);

    Example example{ projects };
    run = true;
    int projNum = 0;
    int choosenNum = 0;

    do
    {
        for (const auto& project : projects)
        {
            std::cout << projNum << ". " << project.first << std::endl;
            ++projNum;
        }
        projNum = 0;
        std::cin >> choosenNum;
        projects.at(choosenNum).second();

    } while (run);

    return 0;
}
