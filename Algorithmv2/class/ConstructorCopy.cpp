/*
 * ConstructorCopy.cpp
 *
 *  Created on: Mar 10, 2020
 *      Author: pass-la-1
 */

// copy constructor: deep copy
#include <iostream>
#include <string>
using namespace std;

class Example5 {
	string *ptr;
public:
	Example5(const string &str) :
			ptr(new string(str)) {
			int a = 0; // added to check coverage
	}

	~Example5() {
		delete ptr;
	}

	// copy constructor:
	Example5(const Example5 &x) :
			ptr(new string(x.content())) {
			int a = 0; // added to check coverage
	}

	// access content:
	const string& content() const {
		return *ptr;
	}
};

//int main() {
//	Example5 foo("Example");
//	Example5 bar = foo;
//
//	cout << "bar's content: " << bar.content() << '\n'; // bar's content: Example
//	return 0;
//}

