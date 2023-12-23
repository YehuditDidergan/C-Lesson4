#pragma once
#include "Shape.h"
class Rectangle :public Shape
{
public:
	Rectangle();
	bool isSpecial() const override
	{
		return (length(points[0], points[1]) == length(points[1], points[2]) &&
			length(points[1], points[2]) == length(points[2], points[3]) &&
			length(points[2], points[3]) == length(points[0], points[1]));
	}
	float area() const override
	{
		return length(points[0], points[1]) * length(points[1], points[2]);
	}
	virtual void printSpecial() const { cout << "Square with side length"; }
};

