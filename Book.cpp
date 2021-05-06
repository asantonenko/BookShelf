#include "Book.h"

#include <stdexcept>

using namespace std;

Book::Book() : m_Title("None"), m_Author("Unknown"), m_PageNumber (0)
{
    //ctor
}

Book::Book(const std::string& title, const std::string& author, int pageNumber)
: m_Title(title), m_Author(author), m_PageNumber (pageNumber)
{
    if (pageNumber <= 0)
    {
        throw invalid_argument("Wrong page number");
    }
}

void Book::SetPageNumber(int val)
{
    if (val <= 0)
    {
        throw invalid_argument("Wrong page number");
    }
    m_PageNumber = val;
}

std::string Book::Info() const
{
    return "Book: " + GetTitle() + " Author: " + GetAuthor() + " (" + to_string(GetPageNumber()) + " pages)";
}
