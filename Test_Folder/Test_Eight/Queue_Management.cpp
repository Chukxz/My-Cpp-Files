#include <iostream>
#include "Modify.hpp"
#include <math.h>
using namespace std;

template <class Q>
class Queue{
    private:
    int size;
    Q * queue;
    int qsize = 100;
    public:
    Queue(){
        size = 0;
        queue = new Q [qsize];
    }
    void add(Q data){
        queue[size] = data;
        size++;
    }
    void remove(){
        if(size==0){
            cout<<"Empty"<<endl;
            return;
        }
        for(int i=0;i<size;i++){
            queue[i] = queue[i+1];
        }
    size--;
    }
    void printInfo(){
        if(size==0){
            cout<<"Empty"<<endl;
            return;
        }
        for(int i=0;i<size;i++){
            if(i==size-1){
                cout<<queue[i];
                break;
            }
            cout<<queue[i]<<" <- ";
        }          
    cout<<endl;
    cout<<size<<endl;
    }
    Queue operator+ (Queue &obj){
        Queue object;
        object.size = this->size + obj.size;
        for(int i=0;i<this->size;i++){
            object.queue[i] = this->queue[i];
        }
        for(int i=0;i<obj.size;i++){
            object.queue[this->size+i] = obj.queue[i];
        }
        return object;
    }
};


int main(){
	Queue<int> q1; 
    for(int i=100;i>=0;i--){
        q1.add(i);
    }
	Queue<int> q2; 
    for(int i=0;i<=100;i++){
        q2.add(i);
    }
    // q1.printInfo();
    // q2.printInfo();
    Queue <int> q3;
    q3 = q1+q2;
    // q3.printInfo();

    Queue<string> q4;
	q4.add("Dave"); 
    q4.add("John"); 
    q4.add("Amy");
	q4.printInfo();
}
