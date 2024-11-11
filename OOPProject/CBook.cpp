#include "CBook.hpp"

namespace Library
{

//-------------------------------------------------
CBook::CBook(std::string title, e_type type)
    : IMedia(title, type)
{

}

//-------------------------------------------------
void CBook::lendOut()
{
    setAvailable(false);
}

//-------------------------------------------------
void CBook::mediaReturned()
{
    setAvailable(true);
}

//-------------------------------------------------
void CBook::setCoverQuote(const std::string & quote)
{
    m_coverQuote = quote;
}

//-------------------------------------------------
std::string CBook::getCoverQuote()
{
    return m_coverQuote;
}

//-------------------------------------------------
void CBook::setCoverDesc(const std::string & description)
{
    m_coverDescription = description;
}

//-------------------------------------------------
std::string CBook::getCoverDesc()
{
    return m_coverDescription;
}

}