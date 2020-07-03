// overloading class constructors
// Link: http://www.cplusplus.com/doc/tutorial/classes/
#include <iostream>
using namespace std;

class Rectangle2 {
	int width, height;
public:
	Rectangle2();
	Rectangle2(int, int);
	int area(void) {
		return (width * height);
	}
};

Rectangle2::Rectangle2() {
	width = 5;
	height = 5;
}

Rectangle2::Rectangle2(int a, int b) {
	width = a;
	height = b;
}

//int main() {
//	Rectangle2 rect(3, 4);
//	Rectangle2 rectb;
//	cout << "rect area: " << rect.area() << endl;
//	cout << "rectb area: " << rectb.area() << endl;
//	return 0;
//}
