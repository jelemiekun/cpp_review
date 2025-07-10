#include <iostream>

static int multiply(int& firstNumber, int& secondNumber) {
	return firstNumber * secondNumber;
}

static void printNumber(int& number) {
	std::cout << number;
}

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

	return EXIT_SUCCESS;
}