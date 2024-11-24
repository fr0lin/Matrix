#include "Matrix.h"
#include <iostream>

int Matrix::count = 0;

Matrix::Matrix()
	: Matrix(3, 3)
{}

Matrix::Matrix(size_t rows, size_t cols)
	: _cols(cols), _rows(rows)
{
	count++;
	_data = new int* [rows];
	for (size_t i = 0; i < rows; i++)
	{
		_data[i] = new int[cols] {};
	}
	std::cout << "Matrix Ctor\n";
}

Matrix::~Matrix()
{
	count--;
	for (size_t i = 0; i < _rows; i++)
	{
		delete[] _data[i];
	}
	delete[] _data;
	std::cout << "Matrix Dctor\n";
}

size_t Matrix::GetCols() const
{
	return _cols;
}


void Matrix::SetCols(size_t value)
{
	// _cols = value;
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

void Matrix::Print() const
{
	for (size_t i = 0; i < this->_rows; i++)
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

int Matrix::GetCount()
{
	return count;
}
