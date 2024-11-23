#pragma once

class Matrix
{
private:
	const int DEF_ROW = 3;
	const int DEF_COL = 3;
	int** _data = nullptr;
	size_t _cols = 0;
	size_t _rows = 0;
public:
	Matrix();
	Matrix(int value);
	Matrix(size_t rows);
	Matrix(size_t rows, size_t cols);
	~Matrix();
	size_t GetCols();
	void SetCols(size_t cols);
	void Init();
	void Print();
	void PushFrontRow();
	void PushBackRow();
};