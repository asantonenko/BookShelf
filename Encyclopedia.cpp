#include "Encyclopedia.h"

Encyclopedia::Encyclopedia() : m_Topic ("None")
{}

Encyclopedia::Encyclopedia(const std::string& title, const std::string& author, int pageNumber, const std::string& topic)
: Book(title,author,pageNumber), m_Topic (topic)
{}

std::string Encyclopedia::Info() const
{
    return "Encyclopedia " + Book::Info() + " Topic: " + GetTopic();
}
