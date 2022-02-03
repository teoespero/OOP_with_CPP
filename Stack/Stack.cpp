//  Stack.cpp : This file contains the 'main' function. Program execution begins and ends there.
//  Teodulfo Espero
//  BS Cloud and Systems Administration
//  BS Software Development
//  Western Governors University

#include <iostream>

using namespace std;

class Stack {
private:
	static const int MAX = 10;
	int mystack[MAX];
	int topoftstack;
public:
	Stack():topoftstack(0){
		cout << "Stack being created..." << endl << endl;
	}

	~Stack(){
		cout << endl << "Stack being destroyed..." << endl;
	}

	void push(int stackvalue) {
		mystack[++topoftstack] = stackvalue;
	}

	int pop() {
		return mystack[topoftstack--];
	}

	int topofstack() {
		return mystack[topoftstack];
	}

	int showstack() {
		return topoftstack;
	}

};

int main(){

	Stack stack01;

	stack01.push(13);
	cout << "Top on stack: " << stack01.topofstack() << endl;

	stack01.push(8);
	cout << "Top on stack: " << stack01.topofstack() << endl;

	stack01.push(1976);
	cout << "Top on stack: " << stack01.topofstack() << endl;

	cout << "Popping  " << stack01.pop() << endl;
	cout << "stack " << stack01.showstack() << endl;

	cout << "Popping  " << stack01.pop() << endl;
	cout << "stack " << stack01.showstack() << endl;

	cout << "Popping  " << stack01.pop() << endl;
	cout << "stack " << stack01.showstack() << endl;

	cout << "Popping  " << stack01.pop() << endl;
	cout << "stack " << stack01.showstack() << endl;

}

