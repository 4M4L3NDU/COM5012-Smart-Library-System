#include "User.h"
#include <iostream>

User::User(std::string n, int id)
{
    name = n;
    userID = id;
}

std::string User::getName()
{
    return name;
}

int User::getUserID()
{
    return userID;
}

void User::displayUser()
{
    std::cout << "Name: " << name << ", User ID: " << userID << std::endl;
}