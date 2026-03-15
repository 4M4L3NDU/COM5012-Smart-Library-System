#pragma once
#include "User.h"

class Member : public User
{
private:
    int borrowedBooks;

public:
    Member(std::string n, int id);

    void borrowBook();
    void returnBook();

    int getBorrowedBooks();

    void displayMember();
};