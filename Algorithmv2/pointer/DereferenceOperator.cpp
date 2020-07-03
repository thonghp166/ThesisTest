/*
 * DereferenceOperator.cpp
 *
 *  Created on: Mar 10, 2020
 *      Author: pass-la-1
 */

#include <iostream>
using namespace std;

void test(int foo) {
	int firstvalue, secondvalue;
	int *mypointer;

	mypointer = &firstvalue;
	*mypointer = 10;
	mypointer = &secondvalue;
	*mypointer = 20;
	cout << "firstvalue is " << firstvalue << '\n'; // firstvalue is 10
	cout << "secondvalue is " << secondvalue << '\n'; // secondvalue is 20
}

void test1(int foo) {
	int firstvalue = 5, secondvalue = 15;
	int *p1, *p2;

	p1 = &firstvalue;  // p1 = address of firstvalue
	p2 = &secondvalue; // p2 = address of secondvalue
	*p1 = 10;          // value pointed to by p1 = 10
	*p2 = *p1;         // value pointed to by p2 = value pointed to by p1
	p1 = p2;           // p1 = p2 (value of pointer is copied)
	*p1 = 20;          // value pointed to by p1 = 20

	cout << "firstvalue is " << firstvalue << '\n'; // firstvalue is 10
	cout << "secondvalue is " << secondvalue << '\n'; // secondvalue is 20
}

void test3() {
	int numbers[5];
	int *p;
	p = numbers;
	*p = 10;
	p++;
	*p = 20;
	p = &numbers[2];
	*p = 30;
	p = numbers + 3;
	*p = 40;
	p = numbers;
	*(p + 4) = 50;
	for (int n = 0; n < 5; n++)
		cout << numbers[n] << ", "; // 10, 20, 30, 40, 50,
}

//int main() {
//	int a = 2;
//	test1(a);
//}

