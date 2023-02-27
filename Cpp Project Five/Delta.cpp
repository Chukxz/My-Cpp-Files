#include <iostream>
#include <string>
using namespace std;

class BankAccount{
        public:
        void sayHi(){
            cout << "Hi" << endl;
        }
    }; 

class myClass{
    public:
    void setName(string x){
        name = x;
    }
    string getName(){
        return name;
    }
    private:
    string name;
};

int main(){

    BankAccount test;
    test.sayHi();

    myClass myObj;
    myObj.setName("John");
    cout<<myObj.getName();
    return 0;
}