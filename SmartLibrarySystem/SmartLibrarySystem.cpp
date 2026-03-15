#include <iostream>
#include "Book.h"
#include "User.h"

int main()
{
    Book book1("fire", "AK", "12345");
    User user1("Amalendu", 1001);

    book1.displayBook();
    std::cout << std::endl;
    user1.displayUser();

    return 0;
}