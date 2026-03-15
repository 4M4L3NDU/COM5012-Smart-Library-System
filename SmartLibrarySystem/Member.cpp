#include "Member.h"
#include <iostream>

Member::Member(std::string n, int id) : User(n, id)
{
    borrowedBooks = 0;
}

void Member::borrowBook(Book& book)
{
    if (borrowedBooks >= 5)
    {
        std::cout << "Borrowing limit reached." << std::endl;
        return;
    }

    if (book.getStatus() == "Available")
    {
        book.setStatus("Borrowed");
        borrowedBooks++;
        std::cout << "Book borrowed successfully." << std::endl;
    }
    else
    {
        std::cout << "Book is not available." << std::endl;
    }
}

void Member::returnBook(Book& book)
{
    if (book.getStatus() == "Borrowed" && borrowedBooks > 0)
    {
        book.setStatus("Available");
        borrowedBooks--;
        std::cout << "Book returned successfully." << std::endl;
    }
    else
    {
        std::cout << "Return failed." << std::endl;
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