#pragma once
#include <string>

class User
{
protected:
    std::string name;
    int userID;

public:
    User(std::string n, int id);

    std::string getName();
    int getUserID();

    void displayUser();
};