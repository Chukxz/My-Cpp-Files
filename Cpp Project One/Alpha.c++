#include <iostream>
using namespace std;

int main()
{
    //Prints "Hello world! and some other stuff '\_('-')_/' "
//     cout << "Hello world! \n";
//     cout << "Learning" << " is " <<" fun!\n";

// int num;
// cin >> num;

// cout << num;
 
//    int a;
//    int b;
   
// cin >> a >> b;

// int sum = a + b;
//    cout << sum;

/*
NOTE: 'endl' may or may not be suitable.
*/

// int a,b,sum;
// cout << "Enter a number \n";
// cin >> a;
// cout << "Enter another a number \n";
// cin >> b;
// sum = a + b;
// cout << "Sum is: " << sum << endl;

// auto num = 0;

// cout << num;

// int w,x,y,z;

// w = 3;
// y = 3;

// x = w++;
// z = ++y;

// cout << "w: " << w << "\n" << "x: " << x << "\n" << "y: " << y << "\n" << "z: " << z << "\n";

// int p,b,r;
// b = 50;

// cin >> p;

// r = b - (p % b);

// if((p != b) && (p != 0)){
//     if((p % b) > r){
//         cout << "The number of people seated in the last bus is greater than the seats left empty.\n";
//     }
//     if((p % b) == r){
//         cout << "The number of people seated in the last bus is equal to the seats left empty.\n";
//     }
//     if((p % b) < r){
//         cout << "The number of people seated in the last bus is less than the seats left empty.\n";
//     }
// }

// cout << "Bus maximum capacity: " << b << "\n";
// cout << "Number of buses filled: " << (p / b) << "\n";
// cout << "Number of buses used: " << (p / b) + 1 << "\n";
// cout << "Number of people on last bus: " << (p % b) << "\n";
// cout << "Number of seats empty on last bus: " << r << "\n";


// string b = "Learning right!";

// char word[] = {'c', 'h', 'a', 'm', 'p', 'i', 'o', 'n', 's', 'h', 'i', 'p'};
// //your code goes here
// for (int i = 0; i <= size(word);i++){
//     if((i == 0) || (i == 4) || (i == (size(word)-1))){
//         cout << word[i];
//         }
//     }


int nMatrix[2][3][7] = {
    {{23,2908,298,982,2983,1001,91},{99,19,29,98,78,543,63},{232,1211,53,21,98,7876,663}},
    {{83,2983,292,23,982,292,145},{29,190,81,23,98,23,928},{123,98,6743,98,123,687,988}},
    };

int a,b,c;
cin>> a>>b>>c;

    int score = 5;
    int * scorePtr;
    scorePtr = &score;

    int *p = new int;
    *p = 5;

    cout <<endl<<&nMatrix<<endl<<nMatrix[a][b][c]<<endl<<scorePtr <<endl<<score<<endl<<*scorePtr<<endl<<*p<<endl;
delete p;
return 0;
}