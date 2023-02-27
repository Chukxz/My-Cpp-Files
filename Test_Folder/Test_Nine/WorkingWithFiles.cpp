#include <iostream>
#include <fstream>
using namespace std;

int main(){
    // ofstream MyFile;
    // MyFile.open("test.txt");
    // MyFile <<"Some text. \n";
    // MyFile.close();

    // ofstream Myfile("text.txt");
    // if(Myfile.is_open()){
    //     Myfile << "A good text file. \n";
    // }
    // else{
    //     cout<<"Something went wrong";
    // }
    // Myfile.close();
    string line;
    ifstream Afile("test.txt");
    while(getline(Afile, line)){
        cout << line << '\n';
    }
    Afile.close();
}



//Mode Parameter                     Meaning
//ios::app                           append to end of file
//ios::ate                           go to end of file on opening
//ios::binary                        file open in binary mode
//ios::in                            open file for reading only
//ios::out                           open file for writing only
//ios::trunc                         delete the contents of the file if it exists


//ofstream outfile;
//outfile.open("file.dat", ios::out | ios::trunc );