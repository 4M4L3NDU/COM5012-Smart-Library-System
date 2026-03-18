#include "Librarian.h"
#include <iostream>

Librarian::Librarian(std::string n, int id) : User(n, id)
{
}

void Librarian::addBookToLibrary(Library& library, const Book& book)
{
    library.addBook(book);
    std::cout << "Librarian added a book to the library.\n";
}

void Librarian::displayUser()
{
    std::cout << "Librarian Details:\n";
    User::displayUser();
}