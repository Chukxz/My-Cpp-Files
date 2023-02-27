#include "FirstClass.hpp"
#include <iostream>
using namespace std;

FirstClass::FirstClass(){
    cout << "Constructor" << endl;
}

FirstClass::~FirstClass(){
    cout << "Destructor" << endl;
}

int FirstClass::value(){
    return values;
}

int FirstClass::changevalue(int change){
    return values = change;
}

int main(){
    FirstClass firstobj;
    cout << firstobj.values << endl;

    cout<<firstobj.value()<<endl;
    firstobj.changevalue(32);
    cout<<firstobj.value()<<endl;

    cout << firstobj.values << endl;
    return 0;
}