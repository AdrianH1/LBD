#include <iostream>
#include <vector>
#include <functional>

#include "CommonDefinitions.hpp"

#include "ExampleProject/Example.hpp"
#include "OOPProject/OOP.hpp"

namespace
{
bool run = false;
}

void stopApp()
{
    run = false;
    std::cout << "End of application" << std::endl;
}

int main(int argc, char const *argv[])
{
    Common::project_s stopProj{ "Stop App", "stops app execution", stopApp };
    Common::getList().emplace_back(stopProj);

    Example example{};
    OOP oop{};

    run = true;
    int projNum = 0;
    int choosenNum = 0;

    do
    {
        for (const auto& project : Common::getList())
        {
            std::cout << projNum << ". " << project.name << std::endl;
            std::cout << project.description << std::endl;
            std::cout << "-----------------------------------------------" << std::endl;
            ++projNum;
        }
        projNum = 0;
        std::cin >> choosenNum;
        std::cout << "//////////////////////////////////////////////" << std::endl;
        Common::getList().at(choosenNum).startFunc();
        std::cout << "//////////////////////////////////////////////" << std::endl;

    } while (run);

    return 0;
}
