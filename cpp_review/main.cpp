#include <iostream>
#include <string>

static int multiply(int& firstNumber, int& secondNumber) {
	return firstNumber * secondNumber;
}

static void print(std::string& string) {
	std::cout << string;
}

int main() {
	std::string resultString;

	int firstValue = 10;
	int secondValue = 5;
	int* pointerToFirst = &firstValue;
	int product = multiply(*pointerToFirst, secondValue);

	resultString += std::to_string(*pointerToFirst);
	resultString += " * ";
	resultString += std::to_string(secondValue);
	resultString += " = ";
	resultString += std::to_string(product);

	print(resultString);

	return EXIT_SUCCESS;
}