#include <iostream>
using namespace std;

class Class{
    public:
    Class();
    void printClass() const;
    mutable int cnt; //changes the variable 'cnt' from read-only (as a result of the const object) to mutable
};

void Class::printClass() const{
    cout << "Hello " << cnt << endl;
    cnt ++;
}

Class::Class(){
    cnt == 0;
}

int main(){
    const Class demo;
    demo.printClass();
    demo.printClass();
    demo.printClass();
}