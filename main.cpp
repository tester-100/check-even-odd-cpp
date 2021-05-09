/*
A C++ program to check wheter an user entered number is an odd number or an even number.
*/

#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
	int number;
	cout << "Enter the number : ";
	cin >> number;
	
	if ((number % 2) == 0) {
		cout << "[ The entered number is an even number ]" << endl;
	} else {
		cout << "[ The entered number is an odd number ]" << endl;
	}
	return 0;
}
