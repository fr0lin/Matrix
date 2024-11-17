#include "Matrix.h"
#include <iostream>


Matrix* Create(size_t rows, size_t cols)
{
	Matrix* result = new Matrix;
	result->data = new int* [rows];
	for (size_t i = 0; i < rows; i++)
	{
		result->data[i] = new int[cols] {};
	}
	result->cols = cols;
	result->rows = rows;
	return result;
}

void Delete(Matrix* matrix)
{
	if (matrix == nullptr)
		return;
	if (matrix->data == nullptr)
		return;

	for (size_t i = 0; i < matrix->rows; i++)
	{
		delete[] matrix->data[i];
	}
	delete[] matrix->data;
	matrix->data = nullptr;
	matrix->cols = 0;
	matrix->rows = 0;
}

void Init(Matrix* matrix)
{
	if (matrix == nullptr)
		return;
	if (matrix->data == nullptr)
		return;

	for (size_t i = 0; i < matrix->rows; i++)
	{
		for (size_t j = 0; j < matrix->cols; j++)
		{
			matrix->data[i][j] = rand() % 21;
		}
	}
}

void Print(Matrix* matrix)
{
	if (matrix == nullptr)
		return;
	if (matrix->data == nullptr)
		return;

	for (size_t i = 0; i < matrix->rows; i++)
	{
		for (size_t j = 0; j < matrix->cols; j++)
		{
			std::cout << matrix->data[i][j] << '\t';
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
}

void PushFrontRow(Matrix* matrix)
{

}

void PushBackRow(Matrix* matrix)
{

}