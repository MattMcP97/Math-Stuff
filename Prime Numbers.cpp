/*
User can either check if an individual number is prime,
or a specificed range of numbers can be checked.
*/

#include<iostream>
#include "primeObject.h"
using namespace std;

primeObject primetools;

int main() {
	bool decision;
	cout << "Check single integer for prime?(1/0): ";
	cin >> decision;
	if (decision) {
		int checksingle;
		cout << "Enter an integer greater than 0: ";
		cin >> checksingle;
		if (primetools.primeCheck(checksingle) == 1) {
			cout << checksingle << " is prime.\n";
		}
		else {
			cout << checksingle << " is not prime.\n";
		}
	}
	cout << "\nCheck range of integers for primes?(1/0): ";
	cin >> decision;
	if (decision) {
		int start, end;
		cout << "Enter starting integer: ";
		cin >> start;
		cout << "\nEnter ending integer: ";
		cin >> end;
		primetools.rangeCheck(start, end);
	}
	cout << "\nDisplay saved primes?(1/0): ";
	cin >> decision;
	if (decision) {
		primetools.savedPrimeList();
	}

	return 0;
}