#pragma once

#include "IBookUser.hpp"

namespace Library
{

class CUser
{
public:
    CUser(const std::string& userName);

    // void lendOut(const IMedia& media);
    // void mediaReturned(const IMedia& media);

private:
    std::string m_userName;

};

}