#pragma once

#include <string>

namespace Library
{

class IBookUser
{
    virtual std::string getCoverQuote() = 0;
    virtual std::string getCoverDesc() = 0;
};

}