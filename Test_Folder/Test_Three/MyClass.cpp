#include <iostream>
#include "MyClass.hpp"
using namespace std;

MyClass::MyClass(){}

void MyClass::myPrint(){
    cout << "Hello world!" << endl;
}

int main(){
    const double constant = 23.823;

    MyClass my_obj;
    MyClass *ptr = &my_obj;
    ptr -> myPrint();
    my_obj.myPrint();
    return 0;
}
