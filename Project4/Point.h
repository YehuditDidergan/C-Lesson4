#pragma once
#include<iostream>
using namespace std;
class Point
{
public:
	float x;
	float y;
	
	friend std::ostream& operator<<(std::ostream& lhs, const Point& rhs) {
		lhs << "(" << rhs.x << "," << rhs.y << ")";
		return lhs;
	}
	friend std::istream& operator>>(std::istream& is, Point& point) {
		is >> point.x >> point.y;
		return is;
	}
};

