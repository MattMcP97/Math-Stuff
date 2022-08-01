/*
Demonstration that there is only one positive integer n such that
(n^2 + 1) is divisible by (n + 1)
*/

#include <iostream>
#include <iomanip>

using namespace std;

struct integer_and_divisibility {
	int positiveintegers;
	bool integerdivisibility;
};


int main() {
	cout << "Problem: Find all positive integers n such that n^2 + 1 is divisible by n + 1\n";
	int length;
	cout << "Enter number of integers to try: ";
	cin >> length;
	length += 1;

	integer_and_divisibility* intstruct = nullptr;
	intstruct = new integer_and_divisibility[length];

	//Initialize positive integer array
	for (int count = 0; count < length; count++) {
		intstruct[count].positiveintegers = count;
		//cout << intstruct[count].positiveintegers << endl;
	}

	//Two expressions are created for each positive integer
	//(n^2 + 1) and (n + 1)
	//Divisibility is checked with the modulo operator
	//modulo == 0 means divisible, anything else is not divisible
	//The result for each integer is stored in the array of structures
	for (int count = 1; count < length; count++) {
		int nsquared = (pow(intstruct[count].positiveintegers,2) + 1);
		int nplusone = (intstruct[count].positiveintegers + 1);
		if ((nsquared % nplusone) == 0) {
			intstruct[count].integerdivisibility = 1;
		}
		else {
			intstruct[count].integerdivisibility = 0;
		}
	}

	//The contents of the array of structures is displayed here
	//true means the condition was satisfied
	//false means the condition was not satisfied
	for (int count = 1; count < length; count++) {
		cout << intstruct[count].positiveintegers << ": " << boolalpha << intstruct[count].integerdivisibility << endl;
	}

	//Only 1 should be stated as true
	cout << "\nSolution: There is only one positive integer that satisfies the equation: 1\n";

	delete[] intstruct;
	return 0;
}