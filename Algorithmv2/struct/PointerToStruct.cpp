/*
 * PointerToStruct.cpp
 *
 *  Created on: Mar 10, 2020
 *      Author: pass-la-1
 */
// http://www.cplusplus.com/doc/tutorial/structures/



// pointers to structures
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

struct movies_t {
  string title;
  int year;
};

//int main ()
//{
//  string mystr;
//
//  movies_t amovie;
//  movies_t * pmovie;
//  pmovie = &amovie;
//
//  cout << "Enter title: ";
//  getline (cin, pmovie->title);
//  cout << "Enter year: ";
//  getline (cin, mystr);
//  (stringstream) mystr >> pmovie->year;
//
//  cout << "\nYou have entered:\n";
//  cout << pmovie->title;
//  cout << " (" << pmovie->year << ")\n";
////  Output:
////  Enter title: Invasion of the body snatchers
////  Enter year: 1978
////
////  You have entered:
////  Invasion of the body snatchers (1978)
//
//  return 0;
//}
