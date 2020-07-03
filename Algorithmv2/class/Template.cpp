/*
 * Template.cpp
 *
 *  Created on: Mar 10, 2020
 *      Author: pass-la-1
 */

// http://www.cplusplus.com/doc/tutorial/templates/
// class templates
#include <iostream>
using namespace std;

template<class T>
class mypair {
	T a, b;
public:
	mypair(T first, T second) {
		a = first;
		b = second;
	}
	T getmax();
};

template<class T>
T mypair<T>::getmax() {
	T retval;
	retval = a > b ? a : b;
	return retval;
}

//int main() {
//	mypair<int> myobject(100, 75);
//	cout << myobject.getmax() << endl;
//
//	mypair<float> myobject2(10, 75.2);
//	cout << myobject2.getmax() << endl;
//
//	return 0;
//}

