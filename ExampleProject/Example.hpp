#pragma once

#include <functional>
#include <string>
#include <vector>

#include "..\IApplication.hpp"

class Example : public IApplication
{
public:
    Example();
private:
    void startApp() override;
};
