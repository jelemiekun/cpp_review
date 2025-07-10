#include <iostream>
#include "Car.h"
#include <memory>

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

	for (int i = 0; i < 10; i++) {
		std::cout << i << '\n';
	}

	int** pointer = &pointerToFirst;

	std::cout << pointer << '\n';

	int a = 5;
	int& rA = a;

	std::cout << "rA = " << rA << '\n';

	{
		for (int i = 0; i < 3; i++) {
			Car car1;
			car1.displayCarID();
		}
	}

	{
		Car car;

		car.setFacingDirection(Car::Direction::LEFT);
		car.displayFacingDirection();
	}

	{
		Car* car = new Car;
		car->displayCarID();
		delete car;
	}

	{
		std::unique_ptr<Car> uniqueCar = std::make_unique<Car>();
		uniqueCar->setFacingDirection(Car::Direction::DOWN);
		uniqueCar->displayFacingDirection();
	}

	std::cout << "meow" << '\n';


	return EXIT_SUCCESS;
}