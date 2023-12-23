#pragma once
#include<iostream>
#include "Shape.h"
#include "Triangle.h";
#include "Rectangle.h";
#include "Circle.h";
class Main
{
};

int main()
{
	int num, x;
	cout << "How many shapes would you like to define?" << endl;
	cin >> num;
	Shape** shapes = new Shape * [num];
	for (int i = 0; i < num; i++)
	{
		cout << "enter shape 1-Circle, 2-Triangular, 3-Rectangle" << endl;
		cin >> x;
		switch (x)
		{
		case 1:
			int radius;
			cout << "enter radius" << endl;
			cin >> radius;
			if (radius < 0) {
				cout << "invalid input" << endl;
				i--;
				break;
			}
			shapes[i] = new Circle(radius);
			break;
		case 2:
			shapes[i] = new Triangle();
			break;
		case 3:
			shapes[i] = new Rectangle();
			break;
		default:
			cout << "not valid!!!" << endl;
			i--;
			break;
		}
	}
	for (int i = 0; i < num; i++)
	{
		cout << "points: " << *(shapes[i]) << endl;
		cout << "area: " << shapes[i]->area() << endl;
		if (shapes[i]->isSpecial())
			shapes[i]->printSpecial();
	}
    delete[] shapes;
    return 0;
}

