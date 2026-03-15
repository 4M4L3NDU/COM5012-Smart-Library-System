#include "Library.h"
#include <iostream>

void Library::addBook(Book book)
{
    books.push_back(book);
}

void Library::displayBooks()
{
    for (auto& book : books)
    {
        book.displayBook();
        std::cout << std::endl;
    }
}

Book* Library::findBookByISBN(std::string isbn)
{
    for (auto& book : books)
    {
        if (book.getISBN() == isbn)
        {
            return &book;
        }
    }

    return nullptr;
}