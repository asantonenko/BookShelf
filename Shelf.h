#ifndef SHELF_H
#define SHELF_H

#include <vector>
#include "Book.h"

class Shelf
{
    public:
        /** Default constructor */
        Shelf();

        /** Access m_Capacity
         * \return The current value of m_Capacity
         */
        int GetCapacity() { return m_Capacity; }
        /** Set m_Capacity
         * \param val New value to set
         */
        void SetCapacity(int val) { m_Capacity = val; }
        /** Access m_Book
         * \return The current value of m_Book
         */
        const std::vector<const Book*>& GetBooks() const { return m_Books; }

        void AddBook(const Book* book);
        void AddBook(const Book& book);

        void SortBooks();

        const Book* TakeBook(int number);
        const Book* TakeBook(const std::string& title);

    protected:

    private:
        int m_Capacity; //!< Member variable "m_Capacity"
        std::vector<const Book*> m_Books; //!< Member variable "m_Book"
};

#endif // SHELF_H
