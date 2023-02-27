#include <iostream>
using namespace std;

void eval(double num){
    double takein = num*10;
    int integerPart = takein;
   if(takein<1){
    eval(takein);
    }
    else{
        double remPart = takein-integerPart;
        if(remPart>=0.5){
        integerPart++;
    }
    takein = integerPart;
    takein /= 10;
    cout<<takein;
    }
}

int main(){
    eval(0.000283);
    return 0;
}