/*
 * Constructor.cpp
 *
 *  Created on: Mar 10, 2020
 *      Author: pass-la-1
 */

// http://www.cplusplus.com/doc/tutorial/classes2/
// classes and default constructors
#include <iostream>
#include <string>
using namespace std;

class Example3 {
	string data;
public:
	Example3(const string &str) :
			data(str) {
			int a = 0; // added to check coverage
	}

	// default constructor (i.e., a constructor without parameters) d
	Example3() {
	    int a = 0; // added to check coverage
	}

	// with return type as 'const', variable data could not be modified
	const string& content() const {
		return data;
	}
};

//int main() {
//	Example3 foo;
//	Example3 bar("Example");
//
//	cout << "bar's content: " << bar.content() << '\n'; // bar's content: Example
//	return 0;
//}

