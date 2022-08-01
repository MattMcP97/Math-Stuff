#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	cout << "Problem: Find all positive integers n such that n^2 + 1 is divisible by n + 1\n";
	int length;
	cout << "Enter number of integers to try: ";
	cin >> length;

	int* positiveintegers;
	positiveintegers = new int [length];

	bool* divisibleintegers;
	divisibleintegers = new bool[length];

	//Initialize positive integer array
	for (int count = 1; count <= length; count++) {
		*(positiveintegers + count) = count;
		cout << *(positiveintegers + count) << endl;
	}

	for (int count = 1; count <= length; count++) {
		int nsquared = (pow(*(positiveintegers + count),2) + 1);
		int nplusone = (*(positiveintegers + count) + 1);
		if ((nsquared % nplusone) == 0) {
			*(divisibleintegers + count) = 1;
		}
		else {
			*(divisibleintegers + count) = 0;
		}
	}

	for (int count = 1; count <= length; count++) {
		cout << *(positiveintegers + count) << ": " << boolalpha << *(divisibleintegers + count) << endl;
	}

	cout << "\nSolution: There is only one positive integer that satisfies the equation: 1\n";

	return 0;
}