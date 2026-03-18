#pragma once
#include <string>

class Loan
{
private:
    std::string isbn;
    int memberID;
    bool returned;

public:
    Loan(std::string i, int id);

    std::string getISBN();
    int getMemberID();
    bool isReturned();

    void markReturned();
};