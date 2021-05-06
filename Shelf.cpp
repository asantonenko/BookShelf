#include "Shelf.h"

#include <stdexcept>

using namespace std;

Shelf::Shelf()
{
    //ctor
}


void Shelf::AddBook(const Book* book)
{
    if (m_Books.size() >= GetCapacity())
    {
        throw length_error("No place for book!");
    }
    m_Books.push_back(book);
}
void Shelf::AddBook(const Book& book)
{
    AddBook(&book);
}


const Book* Shelf::TakeBook(int number)
{
    if (number < 0 || number >= m_Books.size())
    {
        return nullptr;
    }
    const Book * book = m_Books[number];
    m_Books.erase(m_Books.begin()+number);
    return book;
}

const Book* Shelf::TakeBook(const std::string& title)
{
    for (auto book_it = m_Books.begin(); book_it != m_Books.end(); ++book_it)
    {
        const Book * book = *book_it;
        if (book->GetTitle() == title)
        {
            m_Books.erase(book_it);
            return book;
        }
    }
    return nullptr;
}
