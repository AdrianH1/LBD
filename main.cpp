#include <iostream>
#include <vector>
#include <functional>

#include "CommonDefinitions.hpp"

#include "ExampleProject/Example.hpp"

namespace
{
bool run = false;
}

void stopApp()
{
    run = false;
}

int main(int argc, char const *argv[])
{
    Common::getList().emplace_back("Stop App", stopApp);

    Example example{};
    run = true;
    int projNum = 0;
    int choosenNum = 0;

    do
    {
        for (const auto& project : Common::getList())
        {
            std::cout << projNum << ". " << project.first << std::endl;
            ++projNum;
        }
        projNum = 0;
        std::cin >> choosenNum;
        Common::getList().at(choosenNum).second();

    } while (run);

    return 0;
}
