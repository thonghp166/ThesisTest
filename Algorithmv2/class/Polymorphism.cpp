/*
 * Polymorphism.cpp
 *
 *  Created on: Mar 10, 2020
 *      Author: pass-la-1
 */

// http://www.cplusplus.com/doc/tutorial/polymorphism/
// pointers to base class
#include <iostream>
using namespace std;

class Polygon {
protected:
	int width, height;
public:
	void set_values(int a, int b) {
		width = a;
		height = b;
	}
};

class Rectangle: public Polygon {
public:
	int area() {
		return width * height;
	}
};

class Triangle: public Polygon {
public:
	int area() {
		return width * height / 2;
	}
};

//int main() {
//	Rectangle rect;
//	Triangle trgl;
//	Polygon *ppoly1 = &rect;
//	Polygon *ppoly2 = &trgl;
//	ppoly1->set_values(4, 5);
//	ppoly2->set_values(4, 5);
//	cout << rect.area() << '\n'; // 20
//	cout << trgl.area() << '\n'; // 10
//	return 0;
//}
