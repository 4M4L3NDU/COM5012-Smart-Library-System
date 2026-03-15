#include <iostream>
#include "Book.h"
#include "User.h"
#include "Member.h"

int main()
{
    Book book1("fire", "AK", "12345");
    Member member1("Amalendu", 1001);

    member1.borrowBook(book1);
    member1.displayMember();
    book1.displayBook();

    std::cout << std::endl;

    member1.returnBook(book1);
    member1.displayMember();
    book1.displayBook();

    return 0;
}