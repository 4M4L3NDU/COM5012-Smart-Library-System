#include "Library.h"
#include <iostream>

void Library::addBook(const Book& book)
{
    books.push_back(book);
    std::cout << "Book added successfully.\n";
}

void Library::viewBooks()
{
    if (books.empty()) {
        std::cout << "No books in the library.\n";
        return;
    }

    for (int i = 0; i < books.size(); i++) {
        std::cout << "\nBook #" << i + 1 << std::endl;
        books[i].displayBook();
    }
}

int Library::searchBook(const std::string& title)
{
    for (int i = 0; i < books.size(); i++) {
        if (books[i].getTitle() == title) {
            return i;
        }
    }
    return -1;
}

int Library::searchBookByISBN(const std::string& isbn)
{
    for (int i = 0; i < books.size(); i++) {
        if (books[i].getISBN() == isbn) {
            return i;
        }
    }
    return -1;
}

void Library::displayBookByIndex(int index)
{
    if (index < 0 || index >= books.size()) {
        std::cout << "Invalid book selection.\n";
        return;
    }

    books[index].displayBook();
}

Book& Library::getBook(int index)
{
    return books[index];
}

void Library::addLoan(const Loan& loan)
{
    loans.push_back(loan);
}

void Library::viewLoans()
{
    if (loans.empty()) {
        std::cout << "No active loans.\n";
        return;
    }

    std::cout << "\nLoan Records:\n";
    for (int i = 0; i < loans.size(); i++) {
        std::cout << "Loan #" << i + 1
            << " | ISBN: " << loans[i].getISBN()
            << " | Member ID: " << loans[i].getMemberID()
            << " | Returned: " << (loans[i].isReturned() ? "Yes" : "No")
            << std::endl;
    }
}