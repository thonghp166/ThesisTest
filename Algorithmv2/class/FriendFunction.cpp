/*
 * FriendFunction.cpp
 *
 *  Created on: Mar 10, 2020
 *      Author: pass-la-1
 */

// Link: http://www.cplusplus.com/doc/tutorial/inheritance/
// friend functions
#include <iostream>
using namespace std;

class Rectangle {
	int width, height;
public:
	Rectangle() {
	    int a = 0; // added to check coverage
	}
	Rectangle(int x, int y) :
			width(x), height(y) {
			int a = 0; // added to check coverage
	}
	int area() {
		return width * height;
	}
	friend Rectangle duplicate(const Rectangle&);
};

Rectangle duplicate(const Rectangle &param) {
	Rectangle res;
	res.width = param.width * 2;
	res.height = param.height * 2;
	return res;
}

//int main() {
//	Rectangle foo;
//	Rectangle bar(2, 3);
//	foo = duplicate(bar);
//	cout << foo.area() << '\n';
//	return 0;
//}

