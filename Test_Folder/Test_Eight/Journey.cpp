#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void process();
float powbase(int base,int power);

int main(){
    process();
    return 0;    
}

void process(){
    int *arr = new int[4];
    int sum = 0;
    int max = 3;
    cout<<"Input Pin:"<<endl;
    for(int i=0; i<=max;i++){
        int inputValue;
        cin>>inputValue;
        arr[i] = inputValue;
        sum+= arr[i]*powbase(10,max-i);
    }


    srand(time(0)*sum);
    for(int x = 0; x <11; x++){
        cout<<(rand()%10);
        cout<<" ";
    }
}

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

