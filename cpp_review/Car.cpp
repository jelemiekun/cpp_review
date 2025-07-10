#include "Car.h"
#include <string>

int Car::carCounter = 0;

Car::Car() : carID(0), carSpeed(0), facingDirection(Direction::NONE) {
	this->carID = carCounter;
	std::cout << "Car " << this->carID << " created." << '\n';
	carCounter++;
}

std::string Car::getFacingDirectionToString(Direction direction) const {
	switch (direction) {
	case Car::Direction::NONE: return "None";
	case Car::Direction::UP: return "Up";
	case Car::Direction::DOWN: return "Down";
	case Car::Direction::LEFT: return "Left";
	case Car::Direction::RIGHT: return "Right";
	default: return "Unknown"; break;
	}
}

void Car::displayCarID() const {
	std::cout << "Car ID: " << this->carID << '\n';
}

void Car::displayFacingDirection() const {
	std::cout << getFacingDirectionToString(this->facingDirection) << '\n';
}

void Car::setSpeed(int& speed) {
	this->carSpeed = speed;
}

void Car::setFacingDirection(Direction direction) {
	this->facingDirection = direction;
}

Car::~Car() {
	std::cout << "Car " << carID << " destroyed." << '\n';
}