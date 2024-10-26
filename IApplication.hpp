#pragma once

#include "CommonDefinitions.hpp"

class IApplication
{
public:
    void addToProjects(const std::string& appName)
    {
        Common::getList().emplace_back(std::pair<std::string, std::function<void()>>{ appName, std::bind(&IApplication::startApp, this) });
    };
    virtual void startApp() = 0;
};
