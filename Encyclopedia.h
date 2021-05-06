#ifndef ENCYCLOPEDIA_H
#define ENCYCLOPEDIA_H

#include "Book.h"
#include <string>

class Encyclopedia : public Book
{
    public:
        /** Default constructor */
        Encyclopedia();

        Encyclopedia(const std::string& title, const std::string& author, int pageNumber, const std::string& topic);

        /** Access m_Topic
         * \return The current value of m_Topic
         */
        std::string GetTopic() const { return m_Topic; }
        /** Set m_Topic
         * \param val New value to set
         */
        void SetTopic(std::string val) { m_Topic = val; }

        std::string Info() const override;

    protected:

    private:
        std::string m_Topic; //!< Topic of Encyclopedia
};

#endif // ENCYCLOPEDIA_H
