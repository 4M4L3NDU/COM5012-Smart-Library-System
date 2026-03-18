#include "Loan.h"

Loan::Loan(std::string i, int id)
{
    isbn = i;
    memberID = id;
    returned = false;
}

std::string Loan::getISBN()
{
    return isbn;
}

int Loan::getMemberID()
{
    return memberID;
}

bool Loan::isReturned()
{
    return returned;
}

void Loan::markReturned()
{
    returned = true;
}