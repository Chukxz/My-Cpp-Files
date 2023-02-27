#include <iostream>
using namespace std;

class Account{
    private:
    int balance,interest;
    public:
    Account(){}
    Account(int a):balance(a){
        interest = balance/10;
    }
    int getTotal(){
        return interest + balance;
    }
    Account operator+ (Account &refObj){
        Account rdObj(this->balance + refObj.balance);
        return rdObj;
    }
    friend int getBalance(Account &obj);
    friend int getInterest(Account &obj);
};

int getBalance(Account &objs){
    return objs.balance;
}

int getInterest(Account &objs){
    return objs.interest;
}

int main(){
    Account acc1(250000);
    Account acc2(400000);
    Account acc3(500000);
    Account acc4(acc1+acc2+acc3);
    cout<<acc1.getTotal()<<endl<<acc2.getTotal()<<endl<<acc3.getTotal()<<endl<<acc4.getTotal()<<endl;
    // cout<<endl<<getBalance(acc1)<<endl<<getBalance(acc2)<<endl<<getBalance(acc3)<<endl<<getBalance(acc4)<<endl;
    // cout<<endl<<getInterest(acc1)<<endl<<getInterest(acc2)<<endl<<getInterest(acc3)<<endl<<getInterest(acc4)<<endl;
    return 0;
}