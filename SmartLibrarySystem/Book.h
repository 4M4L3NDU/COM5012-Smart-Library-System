#pragma once
#include <string>

class Book
{
private:
    std::string title;
    std::string author;
    std::string isbn;
    std::string status;

public:
    Book(std::string t, std::string a, std::string i);

    std::string getTitle();
    std::string getAuthor();
    std::string getISBN();
    std::string getStatus();

    void setStatus(std::string s);

    void displayBook();
};