#include "Birthday.hpp"
#include <iostream>
using namespace std;

Birthday::Birthday(int m, int d, int y)
:month(m), day(d), year(y){}

void Birthday::PrintDate(){
    cout<<month<<"/"<<day<<"/"<<year<<endl; 
}

int main(){
    Birthday bd(04,22,2005);
    bd.PrintDate();
    Birthday br(02,23,2004);
    br.PrintDate();
} 
