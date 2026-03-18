#include <iostream>
#include <string>
#include <limits>
#include "Library.h"
#include "Member.h"

int main()
{
    Library library;
    Member member("Amal", 1001);

    library.addBook(Book("Diary of a Wimpy Kid", "Jeff Kinney", "101"));
    library.addBook(Book("Rodrick Rules", "Jeff Kinney", "102"));
    library.addBook(Book("Night of the Living Dummy", "R. L. Stine", "103"));
    library.addBook(Book("Welcome to Dead House", "R. L. Stine", "104"));
    library.addBook(Book("Spider-Man", "Stan Lee", "105"));
    library.addBook(Book("Avengers", "Stan Lee", "106"));

    int choice;

    do {
        std::cout << "\n=============================\n";
        std::cout << "Smart Library System\n";
        std::cout << "Logged in as: " << member.getName()
            << " (User ID: " << member.getUserID() << ")\n";
        std::cout << "Books currently borrowed: " << member.getBorrowedBooks() << "\n";
        std::cout << "=============================\n";
        std::cout << "1. View Books\n";
        std::cout << "2. Borrow Book (by ISBN)\n";
        std::cout << "3. Return Book (by ISBN)\n";
        std::cout << "4. Add Book\n";
        std::cout << "5. Search Book by Title\n";
        std::cout << "6. Display Member Info\n";
        std::cout << "7. Exit\n";
        std::cout << "Enter choice: ";

        std::cin >> choice;

        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid input. Please enter a number from 1 to 7.\n";
            continue;
        }

        if (choice < 1 || choice > 7) {
            std::cout << "Invalid choice. Please enter a number from 1 to 7.\n";
            continue;
        }

        if (choice == 1) {
            library.viewBooks();
        }
        else if (choice == 2) {
            std::string isbn;
            library.viewBooks();

            std::cout << "\nEnter ISBN to borrow: ";
            std::cin >> isbn;

            int index = library.searchBookByISBN(isbn);

            if (index != -1) {
                member.borrowBook(library.getBook(index));
            }
            else {
                std::cout << "Book not found. Please enter a valid ISBN.\n";
            }
        }
        else if (choice == 3) {
            std::string isbn;
            library.viewBooks();

            std::cout << "\nEnter ISBN to return: ";
            std::cin >> isbn;

            int index = library.searchBookByISBN(isbn);

            if (index != -1) {
                member.returnBook(library.getBook(index));
            }
            else {
                std::cout << "Book not found. Please enter a valid ISBN.\n";
            }
        }
        else if (choice == 4) {
            std::string title, author, isbn;

            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            std::cout << "Enter title: ";
            std::getline(std::cin, title);

            std::cout << "Enter author: ";
            std::getline(std::cin, author);

            std::cout << "Enter ISBN: ";
            std::getline(std::cin, isbn);

            if (title.empty() || author.empty() || isbn.empty()) {
                std::cout << "All fields are required. Book was not added.\n";
            }
            else if (library.searchBookByISBN(isbn) != -1) {
                std::cout << "A book with that ISBN already exists.\n";
            }
            else {
                library.addBook(Book(title, author, isbn));
            }
        }
        else if (choice == 5) {
            std::string title;

            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            std::cout << "Enter title to search: ";
            std::getline(std::cin, title);

            if (title.empty()) {
                std::cout << "Search title cannot be empty.\n";
            }
            else {
                int result = library.searchBook(title);

                if (result != -1) {
                    std::cout << "Book found:\n";
                    library.displayBookByIndex(result);
                }
                else {
                    std::cout << "Book not found.\n";
                }
            }
        }
        else if (choice == 6) {
            member.displayUser();
        }
        else if (choice == 7) {
            std::cout << "Exiting program.\n";
        }

    } while (choice != 7);

    return 0;
}