#pragma once

#include "IBookAdmin.hpp"
#include "IBookUser.hpp"
#include "IMedia.hpp"

namespace Library
{
class CBook : public IMedia, IBookAdmin, IBookUser
{
public:
    CBook(int id, std::string title, e_type type);

    //Implementation of IMedia
    void lendOut() override;
    void mediaReturned() override;

    //Implementation of IBookAdmin
    void setCoverQuote(const std::string& quote) override;
    void setCoverDesc(const std::string& description) override;

    //Implementation of IBookUser
    std::string getCoverQuote() override;
    std::string getCoverDesc() override;

private:
    std::string m_coverQuote{};
    std::string m_coverDescription{};
};
} // namespace Library