#ifndef BOOK_H
#define BOOK_H
//#pragma once

#include <string>

class Book
{
    public:
        /** Default constructor */
        Book();
        /** Constructor with parameters*/
        Book(const std::string& title, const std::string& author, int pageNumber);
        /** Default destructor */
        virtual ~Book(){}

        /** Access m_Title
         * \return The current value of m_Title
         */
        std::string GetTitle() const { return m_Title; }
        /** Set m_Title
         * \param val New value to set
         */
        void SetTitle(const std::string& val) { m_Title = val; }
        /** Access m_Author
         * \return The current value of m_Author
         */
        std::string GetAuthor() const { return m_Author; }
        /** Set m_Author
         * \param val New value to set
         */
        void SetAuthor(std::string val) { m_Author = val; }
        /** Access m_PageNumber
         * \return The current value of m_PageNumber
         */
        int GetPageNumber() const { return m_PageNumber; }
        /** Set m_PageNumber
         * \param val New value to set
         */
        void SetPageNumber(int val);

        virtual std::string Info() const;

    protected:

    private:
        std::string m_Title; //!< Member variable "m_Title"
        std::string m_Author; //!< Member variable "m_Author"
        int m_PageNumber; //!< Member variable "m_PageNumber"
};

//class vector{};

#endif // BOOK_H
