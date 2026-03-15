#include "Member.h"
#include <iostream>

Member::Member(std::string n, int id) : User(n, id)
{
    borrowedBooks = 0;
}

void Member::borrowBook()
{
    if (borrowedBooks < 5)
    {
        borrowedBooks++;
        std::cout << "Book borrowed successfully." << std::endl;
    }
    else
    {
        std::cout << "Borrowing limit reached." << std::endl;
    }
}

void Member::returnBook()
{
    if (borrowedBooks > 0)
    {
        borrowedBooks--;
        std::cout << "Book returned successfully." << std::endl;
    }
}

int Member::getBorrowedBooks()
{
    return borrowedBooks;
}

void Member::displayMember()
{
    displayUser();
    std::cout << "Borrowed Books: " << borrowedBooks << std::endl;
}