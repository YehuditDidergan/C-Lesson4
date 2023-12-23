//#include<iostream>
//#include "Main.h"
//#include "Shape.h"
//#include "Triangle.h";
//#include "Rectangle.h";
//#include "Circle.h";
//
//int main()
//{
//    cout << "How many shapes you would like to define?" << endl;
//    int count;
//    cin >> count;
//    Shape** arr = new Shape * [count];
//    Shape* t;
//    int choice;
//    float radius;
//    for (int i = 0; i < count; i++)
//    {
//        cout << "Which shape will U choose? Circle : 1, Triangle : 2,Rectangle : 3" << endl;
//        cin >> choice;
//        switch (choice)
//        {
//        case 1:
//            cout << "Press radius: ";
//            cin >> radius;
//            t = new Circle(radius);
//            break;
//        case 2:t = new Triangle;
//            break;
//        case 3:t = new Rectangle;
//            break;
//        default:
//            throw "ERROR! Invalid input";
//            break;
//        }
//        arr[i] = t;
//    }
//    for (int i = 0; i < count; i++)
//    {
//        cout << *arr[i] << " area is: " << arr[i]->area() << " ";
//        if (arr[i]->isSpecial())
//            arr[i]->printSpecial();
//    }
//    delete[] arr;
//    return 0;
//}