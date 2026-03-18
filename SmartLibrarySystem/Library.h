#pragma once
#include <vector>
#include <string>
#include "Book.h"

class Library
{
private:
    std::vector<Book> books;

public:
    void addBook(const Book& book);
    void viewBooks();
    int searchBook(const std::string& title);
    int searchBookByISBN(const std::string& isbn);
    void displayBookByIndex(int index);
    Book& getBook(int index);
};