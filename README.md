# Smart Library System (COM5012 OOP Coursework)

## Overview
This project is a Smart Library System developed in C++ for the COM5012 Object-Oriented Programming module.

The system allows users to manage books in a library, including borrowing, returning, adding, and searching for books. It demonstrates key OOP concepts such as encapsulation, inheritance, and polymorphism.

---

## Features
- View all books in the library
- Borrow books using ISBN
- Return books using ISBN
- Add new books to the system
- Search books by title
- Track loan records
- Display member and librarian information
- Input validation for user actions
- Limit of 5 books per member

---

## Classes Used
- **Book** – stores book details (title, author, ISBN, status)
- **User** – base class for all users
- **Member** – inherits from User, can borrow/return books
- **Librarian** – inherits from User, can add books
- **Loan** – tracks borrowing records
- **Library** – manages books and loan records

---

## OOP Concepts Demonstrated
- **Encapsulation** – private data with public methods
- **Inheritance** – Member and Librarian inherit from User
- **Polymorphism** – displayUser() overridden in derived classes
- **Modularity** – system divided into multiple classes and files

---

## How to Run
1. Open the project in Visual Studio
2. Build the solution (Ctrl + Shift + B)
3. Run the program (Ctrl + F5)

---

## Example Functionality
- Borrowing a book updates both the book status and loan record
- Returning a book updates the loan record and validates ownership
- Invalid inputs are handled gracefully

---

## Author
COM5012 Student Project
