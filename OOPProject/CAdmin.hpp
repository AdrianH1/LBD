#pragma once

#include "IMedia.hpp"

namespace Library
{

class CAdmin
{
public:
    void lendOut(const IMedia& media);
    void mediaReturned(const IMedia& media);

private:
};

}