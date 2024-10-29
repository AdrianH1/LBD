#pragma once

#include "CommonDefinitions.hpp"

class IApplication
{
public:
    void addToProjects(const std::string& appName, const std::string& appDescription)
    {
        Common::project_s project{};
        project.name = appName;
        project.description = appDescription;
        project.startFunc = std::bind(&IApplication::startApp, this);
        Common::getList().emplace_back(project);
    };
    virtual void startApp() = 0;
};
