#include "Member.h"
#include <iostream>

Member::Member(std::string n, int id) : User(n, id)
{
    borrowedBooks = 0;
}

void Member::borrowBook(Book& book)
{
    if (borrowedBooks >= 5) {
        std::cout << "Limit reached\n";
        return;
    }

    if (book.getStatus() == "Available") {
        book.setStatus("Borrowed");
        borrowedBooks++;
        std::cout << "Book borrowed successfully\n";
    }
    else {
        std::cout << "Book is not available\n";
    }
}

void Member::returnBook(Book& book)
{
    if (book.getStatus() == "Borrowed") {
        book.setStatus("Available");
        borrowedBooks--;
        std::cout << "Book returned successfully\n";
    }
    else {
        std::cout << "Book was not borrowed\n";
    }
}

int Member::getBorrowedBooks()
{
    return borrowedBooks;
}

void Member::displayUser()
{
    User::displayUser();
    std::cout << "Borrowed Books: " << borrowedBooks << std::endl;
}