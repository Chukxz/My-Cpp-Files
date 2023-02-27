#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;
void print();
void printIt(int a);
void printIt(float a);
void printIt(double a);

void prints(){
    cout<<"Looking for something?"<<endl;
}

int fac(int n){
    if((n==1)||(n==0)){
        return 1;
    }else{
        return n * fac(n-1);
    }
}

int main(){
    srand(time(NULL));

    for (int i=0;i<30;i++){
        cout<<1 + (rand()%6);
    }


    // int a = 88;
    // int *ap = &a;

    // int *p = new int;
    // *p = 5;

    // cout << a << endl << *ap << endl << ap << endl << &a << endl << *p << endl << p << endl;

    // delete p;//deletes p

    // cout << p << endl;

    // p = new int;

    // cout << p << endl; 

    // p = NULL;

    // cout << p << endl;

    // int n;
    // cin >> n;

    // int arr[n];
    // int x = 0;


    // do{
    //     cin >> arr[x];
    //     x++;
    // } while(x < n);

    // for(int i = 0; i < n; i++){
    //     cout<<arr[i]<<endl;
    // }

    // int m;
    // cin>>m; //size of the array
    // //your code goes here
    // int num[m];
    // int y = 0;

    // do{
    //     cin >> num[y];
    //     y++;
    // } while(y < m);


    // int max = num[0];
    // for(int j=0; j<m; j++) {
    //     if(num[j]>max)
    //         max = num[j];
    // }
    // cout << max;

// int myArr[23];
// float Arrs[12];
// double Ar[20];

// cout << sizeof(myArr)<<endl<<sizeof(Arrs)<<endl<<sizeof(Ar)<<endl;
// cout << sizeof(Arrs)/ sizeof(Arrs[0])<<endl;

// int ages[5];

//     for (int i = 0; i < 5; ++i) {
//         cin >> ages[i];
//     }
//     //your code goes here
    
//     int min = ages[0];
//     int x = 0;
//     do{
//         if(ages[x]<min){
//             min = ages[x];
//         } 
//         x++;
//     } while(x<5);

// float ticket_sum = 50;
// float minimum = min;
//     cout << (ticket_sum - (ticket_sum * (minimum/100)));

// prints();
// print();

int x = 243;
float y = 23.23;
double z = 29.2398;

printIt(x);
printIt(y);
printIt(z);
printIt(12);
printIt(12.35f);
printIt(12.35);

cout<<fac(10)<<endl;

    return 0;

}

void print(){
    cout << "Say it!"<<endl;
}

void printIt(int a){
    cout<<endl<<a*3<<endl;
}

void printIt(float a){
    cout<<endl<<a*10<<endl;
}

void printIt(double a){
    cout<<endl<<a*15<<endl;
}


