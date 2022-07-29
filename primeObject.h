#pragma once
#ifndef PrimeObjects

class primeObject {
private:
	bool is_it_prime = 1;
	int *savedprimes = new int[9999];
	int number_of_primes = 0;
public:
	//Checks an individual integer
	bool primeCheck(int checked_int);
	void rangeCheck(int start, int end);
	void savedPrimeList();
	~primeObject();
};

primeObject::~primeObject() {
	delete savedprimes;
}

bool primeObject::primeCheck(int checked_int) {
	if (checked_int <= 1) {
		return 0;
	}
	for (int control = 2; control < checked_int - 1; control++) {
		if (checked_int % control == 0) {
			is_it_prime = 0;
			break;
		}
		else {
			is_it_prime = 1;
		}
	}
	return is_it_prime;}

void primeObject::rangeCheck(int start, int end) {
	float number_of_numbers = 0;
	float current_number = 0;
	for (current_number = start; current_number <= end; current_number++) {
		if (primeObject::primeCheck(current_number) == 1) {
			std::cout << current_number << " is prime.\n";
			*(savedprimes + number_of_primes) = current_number;
			number_of_primes++;
		}
		else {
			std::cout << current_number << " is not prime.\n";
		}
		number_of_numbers++;
	}
	float percentprime = (number_of_primes / number_of_numbers) * 100;
	std::cout << "\n" << number_of_primes << " out of the " << number_of_numbers << " checked are prime.";
	std::cout << "\n" << percentprime << "% are prime.";
	return;
}

void primeObject::savedPrimeList() {
	std::cout << "\nThe following numbers are prime:\n";
	for (int i = 0; i < number_of_primes; i++) {
		std::cout << "\n" << *(savedprimes + i);
	}
	return;
}

#endif // !PrimeObjects
