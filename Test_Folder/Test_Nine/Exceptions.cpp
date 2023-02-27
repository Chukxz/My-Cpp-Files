#include <iostream>
using namespace std;


void searchByIndex(string menu[],int size){
    try {
        int x;
        cout<<"Enter index: ";
        cin >> x;
        if(x >= size){
            throw 404;
        }
        else{
            cout<<menu[x];
        }
    }
    catch(...) {
        cout<<"Error 404! - not found";
    }
}

void searchByValue(string menu[],int size){
    try{
        string y;
        cout<<"Enter value: ";
        cin>>y;
        int f = 3;
        for(int i = 0; i<size;i++){
            if(y == menu[i]){
            cout<<"Found "<<y<<" = "<<menu[i]<<endl<<"Index "<<" = "<<i;
            f = 4;
            break;
            }
        }
        if(f==3){
            throw 10;
        }
    }    

    catch(...) {
        cout<<"Error 404! - not found";
    }
}

int main(){
//    try{
//      int motherAge, sonAge;
//     cin>>motherAge>>sonAge;
//     if(motherAge<=sonAge){
//         throw 99;
//     }
//    }
//    catch(int x){
//     cout<<"Wrong age values - Error: "<<x;
//    }

//     string name;
//    cin >> name;
//    try {
//       if(size(name)<4 || size(name)>20 ){
//          throw 10;
//       }
//       else{
//          cout<<"Valid";
//       }
//    }
//    catch(int x) {
//       cout<<"Invalid";
//    }

    // double num1, num2;
    // cout<<"Enter the first number: ";
    // cin>>num1;  
    // cout<<"Enter the second number: ";
    // cin>>num2;

    // try{
    //     if(num2==0){
    //         throw 88;
    //     }
    //     else{
    //         cout<<(num1/num2);
    //     }
    // }
    // catch(...){
    //     cout<<"Error division by 0!";
    // }

    



    string menus[] = {"fruits", "chicken", "fish", "cake"};
    int sizing = size(menus);

    int enteredNumber;
    cout<<"Enter 1 to search for item by index and 2 to search for item by value:"<<endl;
    cin>>enteredNumber;
    if(enteredNumber == 1){
        searchByIndex(menus,sizing);
    }
    else if(enteredNumber ==2){
        searchByValue(menus,sizing);
    }
    return 0;
}