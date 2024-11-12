#pragma once

#include "IMedia.hpp"

namespace Library
{
class CEbook : public IMedia
{
public:
    CEbook(int id, std::string title, e_type type);

    //Implementation of IMedia
    void lendOut() override;
    void mediaReturned() override;

private:

};
} // namespace Library