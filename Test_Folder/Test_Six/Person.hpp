#ifndef PERSON_H    
#define PERSON_H
#include <string>
#include "Birthday.hpp"
using namespace std;

class Person{
    public:
    Person(string n, Birthday b);
    void PrintDetails();
    protected:
    private:
    string name;
    Birthday bd;
};

#endif

