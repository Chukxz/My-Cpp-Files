#include <bits/stdc++.h>

using namespace std;

double kahanSum(vector<double> &fa){
    double sum = 0.0;
    
    //Variable to store the error
    double c = 0.0;

    //Loop to iterate over the array
    for(double f : fa){
        double y = f - c;
        double t  = sum + y;

        c = (t - sum) - y;
        sum = t;
    }
    return sum;
}

//function to implement the sum of an array
double sum(vector<double> &fa){
    double sum  = 0.0;
    //Loop to find the sum of the array
    for(double f : fa)
    {
        sum = sum + f;
    }
    return sum;
}

//Driver code
int main()
{
    vector<double> no(10);
    for(int i = 0; i < 10; i++)
    {
        no[i] = 0.1;
    }
    //Comparing the results
    cout << setprecision(16);
    cout << "Normal sum: " << sum(no)<< "\n";
    cout << "Kahan sum: " << kahanSum(no);
}

// void multipy(int A[][N], int B[][N], int C[][N]){
//     for(int i = 0; i < N; i++){
//         for(int j = 0; j < N; j++){
//             C[i][j] = 0;
//             for(int k = 0; k < N; k++){
//                 C[i][j] += A[i][j]*B[k][j];
//             }
//         }
//     }
// }