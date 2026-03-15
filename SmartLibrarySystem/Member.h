#pragma once
#include "User.h"
#include "Book.h"

class Member : public User
{
private:
    int borrowedBooks;

public:
    Member(std::string n, int id);

    void borrowBook();
    void returnBook();
    void borrowBook(Book& book);

    int getBorrowedBooks();

    void displayMember();
};