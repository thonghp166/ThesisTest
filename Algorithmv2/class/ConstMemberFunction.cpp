/*
 * ConstMemberFunction.cpp
 *
 *  Created on: Mar 10, 2020
 *      Author: pass-la-1
 */

// Link: http://www.cplusplus.com/doc/tutorial/templates/
// constructor on const object
#include <iostream>
using namespace std;

class MyClass {
public:
	int x;
	MyClass(int val) :
			x(val) {
			int a = 0; // added to check coverage
	}

	// const member function
	// The member functions of a const object can only be called
	// if they are themselves specified as const members;
	int get() const {return x;}

	// member function returning a const&
	const int& get2() {return x;}

	// const member function returning a const&
	const int& get3() const {return x;}
};

//int main() {
//	const MyClass foo(10);
//// foo.x = 20;            // not valid: x cannot be modified
//	cout << foo.x << '\n';  // ok: data member x can be read
//	cout << foo.get() << '\n'; // ok: get() is a const member
////	cout << foo.get2() << '\n'; // not valid: can not call non-const function of a const object
//	cout << foo.get3() << '\n'; // ok: get() is a const member
//	return 0;
//}
