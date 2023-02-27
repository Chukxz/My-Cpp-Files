#include <iostream>
#include <string>
using namespace std;

class Base
{
    public:
    Base(){}
    void sayHi(){
        cout<<"Hi"<<endl;
    }
    void getPvt(){
        this->sayFine();
    }
    protected:
    void sayOk(){
        cout<<"Ok"<<endl;
    }
    private:
    void sayFine(){
        cout<<"Fine"<<endl;
    }
};


class Derived : public Base
{
    public:
    Derived(){}
    void getProt(){
        this->sayOk();
    }
};

int main(){
    Base base;
    base.sayHi();
    Derived derived;
    derived.sayHi();
    derived.getPvt();
    derived.getProt();
    return 0;
}