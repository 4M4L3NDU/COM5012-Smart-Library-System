#include <iostream>
#include "Book.h"
#include "User.h"
#include "Member.h"

int main()
{
    Book book1("fire", "AK", "12345");
    Member member1("Amalendu", 1001);

    book1.displayBook();
    std::cout << std::endl;

    member1.borrowBook(book1);

    std::cout << std::endl;

    book1.displayBook();
    member1.displayMember();


    return 0;
}