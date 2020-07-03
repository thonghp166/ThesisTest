/*
 * example1.cpp
 *
 *  Created on: Mar 13, 2020
 *      Author: pass-la-1
 */

#include <iostream>
#include <vector>
// Link: https://en.cppreference.com/w/cpp/language/try_catch

int test() { 
	try {
		std::cout << "Throwing an integer exception...\n";
		throw 42;
	} catch (int i) {
		std::cout << " the integer exception was caught, with value: " << i
				<< '\n';
	} catch (const std::overflow_error& e) {
	    // this executes if f() throws std::overflow_error (same type rule)
	} catch (const std::runtime_error& e) {
	    // this executes if f() throws std::underflow_error (base class rule)
	} catch (const std::exception& e) {
	    // this executes if f() throws std::logic_error (base class rule)
	} catch (...) {
	    // this executes if f() throws std::string or int or any other unrelated type
	}

	try {
		std::cout << "Creating a vector of size 5... \n";
		std::vector<int> v(5);
		std::cout << "Accessing the 11th element of the vector...\n";
		std::cout << v.at(10); // vector::at() throws std::out_of_range
	} catch (const std::exception &e) { // caught by reference to base
		std::cout << " a standard exception was caught, with message '"
				<< e.what() << "'\n";
	}

}

int main(){
	test();
}
