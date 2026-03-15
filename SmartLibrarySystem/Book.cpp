#include "Book.h"
#include <iostream>

Book::Book(std::string t, std::string a, std::string i)
{
    title = t;
    author = a;
    isbn = i;
    status = "Available";
}

std::string Book::getTitle()
{
    return title;
}

std::string Book::getAuthor()
{
    return author;
}

std::string Book::getISBN()
{
    return isbn;
}

std::string Book::getStatus()
{
    return status;
}

void Book::setStatus(std::string s)
{
    status = s;
}

void Book::displayBook()
{
    std::cout << "Title: " << title << std::endl;
    std::cout << "Author: " << author << std::endl;
    std::cout << "ISBN: " << isbn << std::endl;
    std::cout << "Status: " << status << std::endl;
}