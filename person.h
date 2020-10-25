#pragma once

#include <string>

using namespace std;

class Person
{
public:
    FIO name;
    Date dateOfBirth;
    string pathToPhoto;

    Person() {}
    Person(FIO naame, Date dateOfBirth, string pathToPhoto)
    {
        this->name = name;
        this->dateOfBirth = dateOfBirth;
        this->pathToPhoto = pathToPhoto;
    }

};
