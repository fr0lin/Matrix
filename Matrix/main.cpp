#include <iostream>
#include "Matrix.h"

int main()
{
	srand(time(0));

	Matrix obj2;
	Matrix obj1(3, 3);
	// (конструктор за замовчуванням)
	obj1.GetCols();
	obj1.SetCols(10);

	obj1.Init();
	obj1.Print();

	return 0;
}