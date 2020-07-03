// overloading operators example
// Modified from http://www.cplusplus.com/doc/tutorial/templates/
/*
 Overloadable operators

 +    -    *    /    =    <    >    +=   -=   *=   /=   <<   >>
 <<=  >>=  ==   !=   <=   >=   ++   --   %    &    ^    !    |
 ~    &=   ^=   |=   &&   ||   %=   []   ()   ,    ->*  ->   new
 delete    new[]     delete[]
 */
#include <iostream>
using namespace std;

class CVector {
public:
	int x, y;
	CVector() {
	    int a = 0; // added to check coverage
	}
	;
	CVector(int a, int b) : // function name CVector (constructor)
			x(a), y(b) {
			int aa = 0; // added to check coverage
	}
	CVector operator +(const CVector&); // function that returns a CVector
	CVector operator -(const CVector &lhs);
	CVector operator *(const CVector &lhs);
	CVector operator /(const CVector &lhs);
	CVector operator %(const CVector &lhs);
	CVector operator ++();
	CVector operator --();
	CVector operator =(const CVector &lhs);

};

CVector CVector::operator +(const CVector &param) {
	CVector temp;
	temp.x = x + param.x;
	temp.y = y + param.y;
	return temp;
}

CVector CVector::operator -(const CVector &param) {
	CVector temp;
	temp.x = x - param.x;
	temp.y = y - param.y;
	return temp;
}

CVector CVector::operator *(const CVector &param) {
	CVector temp;
	temp.x = x * param.x;
	temp.y = y * param.y;
	return temp;
}

CVector CVector::operator /(const CVector &param) {
	CVector temp;
	temp.x = x / param.x;
	temp.y = y / param.y;
	return temp;
}

CVector CVector::operator %(const CVector &param) {
	CVector temp;
	temp.x = x % param.x;
	temp.y = y % param.y;
	return temp;
}

CVector CVector::operator ++() {
	CVector temp;
	temp.x = x + 1;
	temp.y = y + 1;
	return temp;
}

CVector CVector::operator --() {
	CVector temp;
	temp.x = x - 1;
	temp.y = y - 1;
	return temp;
}

//int main() {
//	CVector foo(3, 1);
//	CVector bar(1, 3);
//
//	CVector addition = foo + bar;
//	cout << addition.x << ',' << addition.y << '\n';
//
//	CVector subtraction = foo - bar;
//	cout << subtraction.x << ',' << subtraction.y << '\n';
//
//	CVector multiply = foo * bar;
//	cout << multiply.x << ',' << multiply.y << '\n';
//
//	CVector division = foo / bar;
//	cout << division.x << ',' << division.y << '\n';
//
//	CVector plusplus = ++foo;
//	cout << plusplus.x << ',' << plusplus.y << '\n';
//
//	CVector assign = foo;
//	cout << assign.x << ',' << assign.y << '\n';
//
//	CVector mod = foo;
//	cout << mod.x << ',' << mod.y << '\n';
//
//	CVector subtractsubtract = --foo;
//	cout << subtractsubtract.x << ',' << subtractsubtract.y << '\n';
//
//	return 0;
//}
