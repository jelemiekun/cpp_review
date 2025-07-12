#pragma once
struct Vector2 {
	float x, y;

	Vector2(float x, float y);
	Vector2 operator+(const Vector2& vector) const;
	Vector2 operator*(const Vector2& vector) const;

	void display() const;
};

