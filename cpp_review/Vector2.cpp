#include "Vector2.h"
#include <iostream>

Vector2::Vector2(float x, float y) : x(x), y(y) {}

Vector2 Vector2::operator+(const Vector2& vector) const {
	return Vector2(this->x + vector.x, this->y + vector.y);
}

Vector2 Vector2::operator*(const Vector2& vector) const {
	return Vector2(this->x * vector.x, this->y * vector.y);
}

void Vector2::display() const {
	std::cout << "X: " << this->x << ", Y: " << this->y << '\n';
}