#pragma once

struct Matrix
{
	int** data = nullptr;
	size_t rows = 0;
	size_t cols = 0;
};

Matrix* Create(size_t rows, size_t cols);
void Delete(Matrix* matrix);
void Init(Matrix* matrix);
void Print(Matrix* matrix);
void PushFrontRow(Matrix* matrix);
void PushBackRow(Matrix* matrix);