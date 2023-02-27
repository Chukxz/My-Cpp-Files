#include <iostream>
using namespace std;

// class Class{
//     public:
//     Class();
//     void printClass() const;
//     mutable int cnt; //changes the variable 'cnt' from read-only (as a result of the const object) to mutable
// };

// void Class::printClass() const{
//     cout << "Hello " << cnt << endl;
//     cnt ++;
// }

// Class::Class(){
//     cnt == 0;
// }

// int main(){
//     const Class demo;
//     demo.printClass();
//     demo.printClass();
//     demo.printClass();
// }


class Aclass{
    public:
    Aclass(int a, int b)
    :regVar(a),
    constVar(b)//Member Initialization List
    {
    }
    void print(){
        cout << regVar << endl << constVar << endl;
    }
    private:
    int regVar;
    const int constVar;
};

int main(){
    Aclass aclass(22,98);
    aclass.print();
    return 0;
}