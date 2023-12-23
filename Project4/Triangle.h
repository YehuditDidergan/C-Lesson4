#pragma once
#include "Shape.h"
class Triangle :public Shape
{
public:
	Triangle();
	bool isSpecial() const override
	{
		return (length(points[0], points[1]) == length(points[1], points[2])) &&
			(length(points[1], points[2]) == length(points[2], points[0]));
	}
	float area() const override
	{
		float a = length(points[0], points[1]), b = length(points[1], points[2]), c = length(points[2], points[0]);
		return 0.5 * (std::sin(std::pow(a, 2) + std::pow(b, 2) - std::pow(c, 2)) / (2 * a * b)) * a * b;
	}
	virtual void printSpecial() const { cout << "An isosceles triangle with a side length "; }
};
