#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

// void prntArr(long double arr[], int size){
//     for(int i=0; i<size; i++){
//         cout<<arr[i]<<" ";
//     }
// }

// void winners(string customers [],int len,int N) {
//     for(int i=1;i<= len;i++){
//         if(i%N==0){
//             cout << customers[i-1]<<endl;
//         }
//     }
    
// }

// s

bool isPalindrome(int num){

}

int main(){

    // long double arr[] = {23.983,377.2983,2983.98,2983.972};
    // prntArr(arr,size(arr));

    // string customers[] = {"Alice", "Bob", "Rayan", "Emma", "Ann", "Bruce", "Synthia", "Daniel", "Richard", "Sam", "Nick", "Mary", "Paul","Leonard","Phill1ip","James","Hope"};
    // int len = size(customers);
    // cout<<len<<endl;
    // //getting the lucky number as input
    // int n;
    // cin >> n;
    // //call function
    // winners(customers,len,n);

    //getting initial count of megabytes
    // int megabytes;
    // cin >> megabytes;
    
    // //printing the count of megabytes before the promotion
    // cout << "Before the promotion: " << megabytes << endl;
    
    // //complete the function call
    // promotion(&megabytes);
    
    // //printing the count of megabytes after the promotion
    // cout << "After the promotion: " << megabytes << endl;

    int number;
    cin >> number;

    if(isPalindrome(number)){
      cout << number << " is a palindrome" << endl;
    }
    else{
      cout << number << " is NOT a palindrome" << endl;
    }


    return 0;  
}


/*complete the function to multiple the megabytes,
  don't forget to set the parameter*/
// void promotion(int *promote) {
    
//     //taking multiplier as input
//     int multiplier;
//     cin>>multiplier;
//     *promote = multiplier * *promote;
    
// }
