#pragma once
#include "Point.h"
#include <iostream>
using namespace std;
class Shape
{
public:
	int numOfPoints;
	Point* points;

	Shape(){
		numOfPoints = 0;
		points = nullptr;
	}
	Shape(int numOfPoints) {
		this->numOfPoints = numOfPoints;
		points = new Point[numOfPoints];
		cout << "Enter values of " << numOfPoints << " points" << endl;
		for (int i = 0; i < numOfPoints; i++) {
			cin >> points[i];
		}
	}
	Shape(const Shape& other)
	{
		numOfPoints = other.numOfPoints;
		points = new Point[other.numOfPoints];
		for (int i = 0; i < other.numOfPoints; i++)
		{
			points[i] = other.points[i];
		}
	}
	Shape(Shape&& other)
	{
		numOfPoints = other.numOfPoints;
		/*for (int i = 0; i < numOfPoints; i++)
		{*/
			points/*[i]*/ = other.points/*[i]*/;
		//}
		other.points = nullptr;
	}
	virtual ~Shape()
	{
		if (points)
			delete[] points;
		//points = nullptr;
	}
	virtual float area() const = 0;
	virtual bool isSpecial() const = 0; /*{ return false; }*/
	//float length(Point& p1, Point& p2) const
	//{
	//	return std::sqrt(std::pow((p2.x - p1.x), 2) + std::pow((p2.y - p1.y), 2));
	//}
	virtual void printSpecial() const = 0;

	friend std::ostream& operator<<(std::ostream& lhs, const Shape& rhs)
	{
		lhs << "points:";
		for (int i = 0; i < rhs.numOfPoints; i++)
		{
			lhs << rhs.points[i];
		}
		lhs << endl;
		return lhs;
	}
};

