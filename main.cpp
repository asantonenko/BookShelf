#include <iostream>
#include <vector>

#include "Book.h"
#include "Shelf.h"
#include "Encyclopedia.h"

using namespace std;
//using std::cout;
//using std::endl;

int main()
{
    Book b("Fairy tale", "Andersen", 100);
    Book b2("Snowwhite", "Andersen", 100);
    Encyclopedia e("Mathpedia","Many",200,"Math");
    Shelf sh;
    sh.AddBook(b);
    sh.AddBook(b2);
    sh.AddBook(e);

    string title;
    cout <<"Enter title of book:" <<endl;
    getline(cin, title);

    auto book = sh.TakeBook(title);

    if (book == nullptr)
    {
        cout <<"Book not found!" <<endl;
    }
    else
    {
        cout <<book->Info() <<endl;
    }

    return 0;
}
