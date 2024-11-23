#include "Matrix.h"
#include <iostream>


Matrix::Matrix()
{

}

Matrix::Matrix(int value)
	: DEF_ROW(value)
{

}

Matrix::Matrix(size_t rows)
	: Matrix(rows, DEF_COL)
{}

Matrix::Matrix(size_t rows, size_t cols)
	: _cols(cols), _rows(rows)
{
	_data = new int* [rows];
	for (size_t i = 0; i < rows; i++)
	{
		_data[i] = new int[cols] {};
	}
}

Matrix::~Matrix()
{
	for (size_t i = 0; i < _rows; i++)
	{
		delete[] _data[i];
	}
	delete[] _data;
}

size_t Matrix::GetCols()
{
	return _cols;
}


void Matrix::SetCols(size_t value)
{
	_cols = value;
}

void Matrix::Init()
{
	for (size_t i = 0; i < _rows; i++)
	{
		for (size_t j = 0; j < _cols; j++)
		{
			_data[i][j] = rand() % 21;
		}
	}
}

void Matrix::Print()
{
	for (size_t i = 0; i < _rows; i++)
	{
		for (size_t j = 0; j < _cols; j++)
		{
			std::cout << _data[i][j] << '\t';
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
}

void Matrix::PushFrontRow()
{

}

void Matrix::PushBackRow()
{

}