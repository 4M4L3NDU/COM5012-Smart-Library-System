#include <iostream>
#include "Library.h"
#include "Member.h"

int main()
{
    Library library;

    library.addBook(Book("The Hobbit", "J.R.R. Tolkien", "123"));
    library.addBook(Book("1984", "George Orwell", "456"));
    library.addBook(Book("Dune", "Frank Herbert", "789"));

    Member member1("Amalendu", 1001);

    int choice;
    std::string isbn;

    do
    {
        std::cout << "\nSmart Library System\n";
        std::cout << "1. View Books\n";
        std::cout << "2. Borrow Book\n";
        std::cout << "3. Return Book\n";
        std::cout << "4. Exit\n";
        std::cout << "Enter choice: ";
        std::cin >> choice;

        if (choice == 1)
        {
            library.displayBooks();
        }

        else if (choice == 2)
        {
            std::cout << "Enter ISBN to borrow: ";
            std::cin >> isbn;

            Book* book = library.findBookByISBN(isbn);

            if (book != nullptr)
            {
                member1.borrowBook(*book);
            }
            else
            {
                std::cout << "Book not found.\n";
            }
        }

        else if (choice == 3)
        {
            std::cout << "Enter ISBN to return: ";
            std::cin >> isbn;

            Book* book = library.findBookByISBN(isbn);

            if (book != nullptr)
            {
                member1.returnBook(*book);
            }
            else
            {
                std::cout << "Book not found.\n";
            }
        }

    } while (choice != 4);

    return 0;
}