#pragma once
#include "User.h"
#include "Book.h"

class Member : public User
{
private:
    int borrowedBooks;

public:
    Member(std::string n, int id);

    void borrowBook(Book& book);
    void returnBook(Book& book);

    int getBorrowedBooks();
    void displayUser() override;
};