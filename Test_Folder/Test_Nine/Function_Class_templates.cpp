#include <iostream>
#include <string>
#include <cstdlib>
#include "FCT.hpp"
using namespace std;


template <class A>
A mul(A x, A y){
    return x*y;
}

template <class T, class U>
T smaller(T x, U y){
    return x < y ? y : x;
}

template <class B, class U>
U Pairs<B,U>::summations(){
    return firsts + seconds ;
}


int main(){
    // cout<<mul(3.3,8.2)<<mul(7.92f,8.88f)<<mul(3,9)<<smaller("98","928llk")<<mul<int>(323,898)<<smaller<double,int>(68.79,95);
    string a = "lksxj";
    string b = "lkkff";
    cout<<smaller(a,b); 
    Pairs pairs(32.73,32);
    cout<<pairs.summations()<<endl;
    Pairs <int,float> pair(32,34.98f);
    cout<<pair.summations();
    Pairs <float,int> pairing(34.98f,75);
    cout<<pairing.summations();
    return 0;
}