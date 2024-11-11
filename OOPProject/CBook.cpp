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

}