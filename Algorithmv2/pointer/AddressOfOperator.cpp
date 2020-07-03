/*
 * AddressOfOperator.cpp
 *
 *  Created on: Mar 10, 2020
 *      Author: pass-la-1
 */

// http://www.cplusplus.com/doc/tutorial/pointers/
#include <iostream>
using namespace std;


void test(int& foo) {
	cout << foo << endl; // 2
	cout << &foo << endl; // 0x7ffff85eaf44
//	cout << *foo << endl; // invalid
}

//int main() {
//	int a = 2;
//	test(a);
//}

