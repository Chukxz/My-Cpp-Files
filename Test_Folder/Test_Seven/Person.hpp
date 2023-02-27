#ifndef PERSON_H
#define PERSON_H
#include "Engine.hpp"

class Person{
    public:
    Person(string name,string carmodelName,Engine ob);
    ~Person();
    void turnKey();
    private:
    string n;
    Engine obs;
    string mName;
    protected:
};

#endif