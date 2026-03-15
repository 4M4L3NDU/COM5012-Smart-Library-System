#pragma once
#include <vector>
#include "Book.h"

class Library
{
private:
    std::vector<Book> books;

public:
    void addBook(Book book);
    void displayBooks();
    Book* findBookByISBN(std::string isbn);
};