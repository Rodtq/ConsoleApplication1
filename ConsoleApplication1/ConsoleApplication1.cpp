// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Shape.h"
#include "Square.h"
#include "Circle.h"
#include <iostream>

void CallShape(Shape*);

int main(int argc, char* argv)
{
	Shape* shapeList[] = { new Square() , new Circle() };
	//Shape* square = new Square();
	//Shape* circle = new Circle();
	//CallShape(square);
	//CallShape(circle);
	std::cout << "Hello World!" << std::endl;
	for (int i = 0; i < 2; i++)
	{
		CallShape(shapeList[i]);
	}
	return 0;
}


void CallShape(Shape* shape)
{
	shape->PrintShape();
	//(*shape).PrintShape();

	delete shape;
	//(*shape).~Shape();
	//shape->PrintShape();
	//(&shape)->PrintShape()

};

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started:
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
