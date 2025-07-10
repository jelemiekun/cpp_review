#pragma once
#include <iostream>

class Car {
public:
	enum class Direction {
		NONE,
		UP,
		DOWN,
		LEFT,
		RIGHT
	};

private:
	static int carCounter;
	int carID;
	int carSpeed;
	Direction facingDirection;

private:
	std::string getFacingDirectionToString(Direction direction) const;

public:
	Car();

	void displayCarID() const;
	void displayFacingDirection() const;

	void setSpeed(int& speed);
	void setFacingDirection(Direction direction);

	~Car();
};

