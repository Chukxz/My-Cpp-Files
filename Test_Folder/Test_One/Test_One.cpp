Un#include <iostream>
using namespace std;

//Palindrome test program v1.0

float powbase(int base, int power){
    if(power==0){
        return 1;
    }
    if(power > 0){
        return base * powbase(base,power-1);
    }
    if(power<0)
    {
        return powbase(base,power+1)*1/base;
    }
    else{
        return 1;
    }
}

int determine(int a,int x = 0){
    if((a/10)==0){
        return x;
    }
    else{
        int res = a/10;
        return determine(res,x+1);
    }
}

int recurse(int a,int no){
    int res;
    int result;
    if(no == 0){
        #cout<<a<<endl;
        return a;
    }
    else{
        #cout<<a<<endl;
        res=a%10;
        result = (a - res)/10;
        a = result;
        #cout<<" "<<res<<" "<<result<<" "<<no<<endl;
    return (res * powbase(10,no)) + recurse(a,no-1);
    }
}

bool compare(int a,int b){
    if(a == b){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    double a;
    cin>>a;
    int no = determine(a);
    int b = recurse(a,no);
    cout<<a<<" "<<b<<endl;
    if(compare(a,b)){
        cout<< a <<" is a palindrome";
    }
    else{
        cout<< a << " is NOT a palindrome";
    }

    return 0;
}
