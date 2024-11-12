#pragma once

#include <string>

namespace Library
{

class IBookAdmin
{
    virtual void setCoverQuote(const std::string& quote) = 0;
    virtual void setCoverDesc(const std::string& description) = 0;
};

}