#pragma once

#include <functional>
#include <string>
#include <vector>


namespace Common
{
using projectList_t = std::vector<std::pair<std::string, std::function<void()>>>;
inline projectList_t& getList() {
    static projectList_t projects;
    return projects;
}
}