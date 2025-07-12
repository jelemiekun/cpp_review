#include <iostream>
#include "Car.h"
#include <memory>
#include "Vector2.h"

static int multiply(int& firstNumber, int& secondNumber) {
	return firstNumber * secondNumber;
}

static void printNumber(int& number) {
	std::cout << number;
}

static void prac1() {
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
}

static void prac2() {
	Vector2 vector1(1, 1);
	Vector2 vector2(1, 1);

	Vector2 vector3 = vector1 + vector2;

	vector3.display();

	Vector2 vector4 = vector3 * vector3;

	vector4.display();
}

int main() {
	prac2();

	return EXIT_SUCCESS;
}