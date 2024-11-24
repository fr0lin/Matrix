#include <iostream>
#include "Matrix.h"

int main()
{
	srand(time(0));
	std::cout << Matrix::GetCount() << std::endl;

	{
		const Matrix obj1(3, 3);
		Matrix obj2(5, 5);

		obj1.Print();

		std::cout << Matrix::GetCount() << std::endl;

		obj2.Init();
		obj2.Print();
	}
	std::cout << Matrix::GetCount() << std::endl;

	return 0;
}