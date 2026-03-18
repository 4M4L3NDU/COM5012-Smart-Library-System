#pragma once
#include "User.h"
#include "Library.h"
#include "Book.h"

class Librarian : public User
{
public:
    Librarian(std::string n, int id);

    void addBookToLibrary(Library& library, const Book& book);
    void displayUser() override;
};