#include <iostream>
#include "Library.h"
#include "Member.h"

int main()
{
    Library library;

    library.addBook(Book("The Hobbit", "J.R.R. Tolkien", "123"));
    library.addBook(Book("1984", "George Orwell", "456"));

    Member member1("Amalendu", 1001);

    library.displayBooks();

    std::cout << "Borrowing book 123..." << std::endl;

    Book* book = library.findBookByISBN("123");

    if (book != nullptr)
    {
        member1.borrowBook(*book);
    }

    std::cout << std::endl;

    library.displayBooks();
    member1.displayMember();

    return 0;
}