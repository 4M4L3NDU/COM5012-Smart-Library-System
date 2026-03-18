#pragma once
#include <vector>
#include <string>
#include "Book.h"
#include "Loan.h"

class Library
{
private:
    std::vector<Book> books;
    std::vector<Loan> loans;

public:
    void addBook(const Book& book);
    void viewBooks();
    int searchBook(const std::string& title);
    int searchBookByISBN(const std::string& isbn);
    void displayBookByIndex(int index);
    Book& getBook(int index);

    void addLoan(const Loan& loan);
    void viewLoans();
    void markLoanAsReturned(const std::string& isbn, int memberID);
    bool hasActiveLoan(const std::string& isbn, int memberID);
};