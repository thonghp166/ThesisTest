/*
 * VoidPointer.cpp
 *
 *  Created on: Mar 10, 2020
 *      Author: pass-la-1
 */

// http://www.cplusplus.com/doc/tutorial/pointers/
// void pointer is able to point to any data type
// increaser
#include <iostream>
using namespace std;

void increase(void *data, int psize) {
	if (psize == sizeof(char)) {
		char *pchar;
		pchar = (char*) data;
		++(*pchar);
	} else if (psize == sizeof(int)) {
		int *pint;
		pint = (int*) data;
		++(*pint);
	}
}

//int main() {
//	char a = 'x';
//	int b = 1602;
//	increase(&a, sizeof(a));
//	increase(&b, sizeof(b));
//	cout << a << ", " << b << '\n';
//	return 0;
//}
