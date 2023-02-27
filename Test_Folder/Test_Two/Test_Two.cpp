#include <iostream> 
using namespace std; 

//Palindrome test program v2.0


bool isPalindrome(int x) { //complete the function 
    int val = x; 
    int remainder; 
    int pal =0; 
    while(x!=0){ 
        remainder = x%10; 
        pal = pal*10 + remainder; 
        x = x/10; 
    } 
    if(val==pal){ 
        return true; 
    } else { 
        return false; 
    } 
} 
int main() { 
    int n; 
    cin >>n; 
    if(isPalindrome(n)) { 
        cout <<n<<" is a palindrome"; } 
    else { 
        cout << n<<" is NOT a palindrome"; 
    } 
    return 0;
}