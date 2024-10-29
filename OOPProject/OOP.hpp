#pragma once

#include <functional>
#include <string>
#include <vector>

#include "..\IApplication.hpp"

class OOP : public IApplication
{
public:
    OOP();
private:
    void startApp() override;
};
