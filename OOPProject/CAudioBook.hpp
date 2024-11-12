#pragma once

#include "IMedia.hpp"

namespace Library
{
class CAudioBook : public IMedia
{
public:
    CAudioBook(int id, std::string title, e_type type);

    //Implementation of IMedia
    void lendOut() override;
    void mediaReturned() override;

private:

};
} // namespace Library