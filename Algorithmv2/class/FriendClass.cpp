/*
 * FriendClass.cpp
 *
 *  Created on: Mar 10, 2020
 *      Author: pass-la-1
 */

// http://www.cplusplus.com/doc/tutorial/inheritance/
// friend class
// a friend class is a class whose members have access to the private or protected members of another class
#include <iostream>
using namespace std;

class Square;

class Rectangle {
	int width, height;
public:
	int area() {
		return (width * height);
	}
	void convert(Square a);
};

class Square {
	friend class Rectangle;
private:
	int side;
public:
	Square(int a) :
			side(a) {
			int aa = 0; // added to check coverage
	}
};

void Rectangle::convert(Square a) {
	width = a.side;
	height = a.side;
}

//int main() {
//	Rectangle rect;
//	Square sqr(4);
//	rect.convert(sqr);
//	cout << rect.area();
//	return 0;
//}

