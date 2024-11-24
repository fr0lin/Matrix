#pragma once

class Matrix
{
private:
	int** _data = nullptr;
	size_t _cols;
	size_t _rows;
	static int count;
public:
	Matrix();
	Matrix(size_t rows, size_t cols);
	~Matrix();
	size_t GetCols() const;
	void SetCols(size_t cols);
	void Init();
	void Print() const;
	void PushFrontRow();
	void PushBackRow();
	static int GetCount();
};