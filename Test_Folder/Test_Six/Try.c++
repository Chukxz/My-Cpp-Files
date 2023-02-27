#include "Person.hpp"
#include "Birthday.hpp"
#include <iostream>
#include <string>
using namespace std;


Birthday::Birthday(int m, int d, int y)
:month(m), day(d), year(y){}

void Birthday::PrintDate(){
    cout<<month<<"/"<<day<<"/"<<year<<endl; 
}

Person::Person(string n, Birthday b)
:name(n), bd(b){}

void Person::PrintDetails(){
    cout<<"Name: "<<name<<endl<<"Date of birth: ";
    bd.PrintDate();
}

int main(){
    Birthday bd(03,23,2004);
    bd.PrintDate();
    Person p("Davis",bd);
    p.PrintDetails();
}