#include <iostream>
using namespace std;


int modulo5(double n){
    double numd = n/5;
    int numi = numd;
    double rem = numd - numi;
    if(rem>0){
        numi++;
    }
    numi = numi*5 - n;
    return numi;
}


int main(){
    double num;
    cin>>num;
    cout<<modulo5(num)<<endl;
    return 0;
}