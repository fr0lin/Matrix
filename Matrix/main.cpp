#include <iostream>
#include "Matrix.h"

int main()
{
	srand(time(0));
	Matrix obj1(3, 3);
	obj1.Init();
	obj1.Print();
	return 0;
}