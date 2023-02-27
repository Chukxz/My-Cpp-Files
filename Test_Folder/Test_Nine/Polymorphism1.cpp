#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

class Enemy { 
    protected:
    int attackPower;
    public:
    virtual void attack() = 0;

    void setAttackPower(int a){
        attackPower = a;
    }
};

class Ninja: public Enemy{
    public:
    void attack(){
        cout<<"Ninja! - "<<attackPower<<endl;
    }
};

class Monster: public Enemy{
    public:
    void attack(){
        cout<<"Monsters! - "<<attackPower<<endl;
    }
};

template <class T>
T sum(T a,T b){
    return a+b;
}

template <class T>
T myMax(T a, T b){    return a>b ? a : b;
}



int main(){
    Ninja n;
    Monster m;
    Enemy *e1 = &n;
    Enemy *e2 = &m;
    double a=6.323,b=23.98;
    int c = 3, d = 9;
    float e = 32.23f, f = 33.98f;
    cout<<sum(a,b)<<endl<<sum(c,d)<<endl<<sum(e,f)<<endl;


    e1->setAttackPower(85);
    e2->setAttackPower(25);

    double x, y;
    cin>>x>>y;
    int u, v;
    cin>>u>>v;
    cout << myMax(x, y) << endl;
    cout << myMax(u, v) << endl;

    // n.attack();
    // m.attack();
    e1->attack();
    e2->attack();
    return 0;
}