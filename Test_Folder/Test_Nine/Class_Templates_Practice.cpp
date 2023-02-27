#include <iostream>
#include <cstring>
#include <string>
using namespace std;

//change the class to a template
template <class Q>
class Queue 
{
	private:
	Q *arr;
        int count;
    public:
    	Queue(int size) {
    	    arr = new Q [size];
    	    count = 0;
    	}
    	void add(Q elem) {
    	    arr[count] = elem;
    	    count++;
    	}
    	void get(int index) {
    	    cout << arr[index]<<endl;
    	}
};

template <class T>
class MyClass {
 public:
  MyClass (T x) {
   cout <<x<<" -  not a char"<<endl;
  }
};

template <>
class MyClass<char> {
 public:
  MyClass (char x) {
   cout <<x<<" is a char!"<<endl;
  }
};

template <>
class MyClass<string> {
	public:
	MyClass (string x){
		cout <<x<<" is a string!"<<endl;
	}
};


int main()
{
	Queue<string> q(4);
	q.add("James");
	q.add("Andy");
	q.add("Amy");
	q.get(2);
	
	Queue <int> n(2);
	n.add(42);
	n.add(33);
	n.get(1);

	MyClass<int> myc(398);
	MyClass<char> myC('s');
	MyClass<string> mYC("239ijsl83");
	return 0;
}