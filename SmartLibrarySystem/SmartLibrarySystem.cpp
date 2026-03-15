#include <iostream>
#include "Book.h"
#include "User.h"
#include "Member.h"

int main()
{
    Book book1("fire", "AK", "12345");
    User user1("Amalendu", 1001);

    book1.displayBook();
    std::cout << std::endl;

    member1.displayMember();
    member1.borrowBook();
    member1.borrowBook();
    member1.displayMember();


    return 0;
}