/*
 * TemplateSpecialization.cpp
 *
 *  Created on: Mar 10, 2020
 *      Author: pass-la-1
 */

// template specialization
// http://www.cplusplus.com/doc/tutorial/templates/
#include <iostream>
using namespace std;

// class template:
template<class T>
class mycontainer {
	T element;
public:
	mycontainer(T arg) {
		element = arg;
	}
	T increase() {
		return ++element;
	}
};

// class          specialization:
template<>
class mycontainer<char> {
	char element;
public:
	mycontainer(char arg) {
		element = arg;
	}
	char uppercase() {
		if ((element >= 'a') && (element <= 'z'))
			element += 'A' - 'a';
		return element;
	}
};

//int main() {
//	mycontainer<int> myint(7);
//	mycontainer<char> mychar('j');
//	cout << myint.increase() << endl; // 8
//	cout << mychar.uppercase() << endl; // J
//	return 0;
//}


