/*
 * NestingStruct.cpp
 *
 *  Created on: Mar 10, 2020
 *      Author: pass-la-1
 */
// NestingStruct
// http://www.cplusplus.com/doc/tutorial/structures/
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

struct movies_t {
	string title;
	int year;
};

struct friends_t {
	string name;
	string email;
	movies_t favorite_movie;
int a;
} charlie, maria;

void test(friends_t charlie) {
	friends_t *pfriends = &charlie;
	charlie.name = "a";
	maria.favorite_movie.title = "a";
	charlie.favorite_movie.year = 1;
	pfriends->favorite_movie.year = 2;
}
