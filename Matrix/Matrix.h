#pragma once

class Matrix
{
private:
	int** _data = nullptr;
	size_t _cols;
	size_t _rows;
public:
	Matrix();
	Matrix(const char* title);
	Matrix(size_t rows, size_t cols);
	~Matrix();
	size_t GetCols();
	void SetCols(size_t cols);
	void Init();
	void Print();
	void PushFrontRow();
	void PushBackRow();
};