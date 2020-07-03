/*
 * InheritanceMultiple.cpp
 *
 *  Created on: Mar 10, 2020
 *      Author: pass-la-1
 */

// http://www.cplusplus.com/doc/tutorial/inheritance/
// multiple inheritance
#include <iostream>
using namespace std;

class Polygon {
protected:
	int width, height;
public: Polygon(){
			int a = 0; // added to check coverage
		}
	Polygon(int a, int b) :
			width(a), height(b) {
			int aa = 0; // added to check coverage
			}
};

class Output {
public:
Output(){
	int a = 0; // added to check coverage
}
	static void print(int i);
};

void Output::print(int i) {
	cout << i << '\n';
}

class Rectangle: public Polygon, public Output {
public:
	Rectangle(){
		int a = 0; // added to check coverage
	}
	Rectangle(int a, int b) :
			Polygon(a, b) {
			int aa = 0; // added to check coverage
			}

	int area() {
		return width * height;
	}
};

class Triangle: public Polygon, public Output {
public:
Triangle(){int a = 0; // added to check coverage
}
	Triangle(int a, int b) :
			Polygon(a, b) {
			int aa = 0; // added to check coverage
			}

	int area() {
		return width * height / 2;
	}
};

//int main() {
//	Rectangle rect(4, 5);
//	Triangle trgl(4, 5);
//	rect.print(rect.area()); // 20
//	Triangle::print(trgl.area()); // 10
//	return 0;
//}

