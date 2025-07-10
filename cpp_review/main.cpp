#include <iostream>

static int multiply(int& firstNumber, int& secondNumber) {
	return firstNumber * secondNumber;
}

static void printNumber(int& number) {
	std::cout << number;
}

class Car {
private:
	static int carCounter;

public:
	Car() {
		std::cout << "Car " << carCounter << " created." << '\n';
		carCounter++;
	}
};

int Car::carCounter = 0;

int main() {
	int firstValue = 10;
	int secondValue = 5;
	int* pointerToFirst = &firstValue;
	int product = multiply(*pointerToFirst, secondValue);

	printNumber(*pointerToFirst);

	std::cout << " * ";

	printNumber(secondValue);

	std::cout << " = ";

	printNumber(product);

	for (int i = 0; i < 10; i++) {
		std::cout << i << '\n';
	}

	int** pointer = &pointerToFirst;

	std::cout << pointer << '\n';

	int a = 5;
	int& rA = a;

	std::cout << "rA = " << rA << '\n';

	for (int i = 0; i < 10; i++) {
		Car car;
	}

	return EXIT_SUCCESS;
}