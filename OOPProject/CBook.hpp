#pragma once

#include "IMedia.hpp"

namespace Library
{
class CBook : public IMedia
{
public:
    CBook(std::string title, e_type type);

    //Implementation of IMedia
    void lendOut() override;
    void mediaReturned() override;

private:
    std::string m_coverQuote{};
    std::string m_coverDescription{};
};
} // namespace Library