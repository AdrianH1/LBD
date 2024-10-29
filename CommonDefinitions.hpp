#pragma once

#include <functional>
#include <string>
#include <vector>


namespace Common
{

struct project_s
{
    std::string name{};
    std::string description{};
    std::function<void()> startFunc;
};
using projectList_t = std::vector<project_s>;

inline projectList_t& getList() {
    static projectList_t projects;
    return projects;
}

}// namespace Common