/*
 * Circle2.cpp
 *
 *  Created on: Mar 10, 2020
 *      Author: pass-la-1
 */

// Case: Member initialization in constructors
// link: http://www.cplusplus.com/doc/tutorial/classes/
#include <iostream>
using namespace std;

class Circle {
	double radius;
public:
Circle(){}
	Circle(double r) :
			radius(r) {
			int a = 0; // to check its coverage
	}
	double area() {
		return radius * radius * 3.14159265;
	}
};

class Cylinder {
	Circle base;
	double height;
public:
Cylinder(){}
	Cylinder(double r, double h) :
			base(r), height(h) {
			int a = 0; // to check its coverage
	}
	double volume() {
		return base.area() * height;
	}
};

//int main() {
//	Cylinder foo(10, 20);
//
//	cout << "foo's volume: " << foo.volume() << '\n';
//	return 0;
//}
