#include <iostream>
#include "Matrix.h"

int main()
{
	srand(time(0));

	Matrix* matrix = Create(3,3);
	Matrix* matrix2 = Create(5, 5);

	Init(matrix);
	Print(matrix);
	Delete(matrix);

	Init(matrix2);
	Print(matrix2);
	Delete(matrix2);
	

	return 0;
}