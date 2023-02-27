#include <iostream>
using namespace std; 
int main () { 
    int HPa = 100, damage, HPb; 
    cout << "Evil enemy guy["<< HPa <<" HP]: Gimme some damage, young one!!!\n"; 
    cin >> damage; HPb = HPa - damage; 
    while (HPb>0) { 
        cout << "Evil enemy guy["<< HPb <<" HP]: Ouch! Don't you dare to do this again!\n"; 
        cin >> damage; HPb = HPb - damage; 
        } 
    if (HPb <=0) { 
        cout << "\nGreat Senpai: Good job! You have killed the Evil enemy guy!"; 
        if (HPb <0) { 
            cout << "\nGreat Senpai: Wow you've overkilled him by " << HPb <<" hit points!!!\n"; 
            } 
        cout << "\n\nYou: WHEEEE!\n\n"; 
        } 
}