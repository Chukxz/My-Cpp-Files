#include <iostream>
#include <string>
using namespace std;

class MyClass{
    public:
        int var;
    MyClass(){
        regVar = 0;
    }
    MyClass(int a)
    :var(a){
        cout<<var<<endl;
    }
    void showVar(){
        cout<<regVar<<endl;
        // cout<<this->regVar<<endl;
        // cout<<n(*this).regVar<<endl;
    }
    MyClass operator+ (MyClass &obj){
        MyClass res;
        res.var = this->var + obj.var;
        return res;
    }
    private:
        int regVar;
    friend void someFunc(MyClass &obj);

};

void someFunc(MyClass &obj){
    obj.regVar = 47;
    cout<<obj.regVar<<endl;
}

int main(){
    MyClass object(5), objects(23),obj(234);
    MyClass res = object + objects + obj;
    cout<<res.var<<endl;
    someFunc(object);
    object.showVar();
    return 0;
}