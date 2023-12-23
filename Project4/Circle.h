#pragma once
#include "Shape.h"
class Circle : public Shape
{
	float radius;
public:
	Circle(float radius) :Shape(1) { this->radius = radius; }
	bool isSpecial() const override
	{
		if (points[0].x == 0 && points[0].y == 0)
			return true;
		return false;
	}
	float area() const override { return 3.14159265 * pow(radius, 2); }
	virtual void printSpecial() const { cout << "A canonicial circle whis radius " << radius; }
};