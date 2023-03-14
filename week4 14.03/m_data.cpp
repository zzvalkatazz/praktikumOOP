#include "matrix.h"
void Matrix::copy(const Matrix& other)
{
	m_rows = other.m_rows;
	m_cols = other.m_cols;
	m_data = new int* [m_rows];
	for (int i = 0; i < m_rows; i++)
	{
		m_data[i] = new int[m_cols];
		for (int j = 0; j < m_cols; j++)
		{
			m_data[i][j] = other.m_data[i][j];
		}
	}

}
void Matrix::erase()
{
	for (int i = 0; i < m_rows; i++)
	{
		delete[]m_data[i];
	}
	delete[]m_data;
	m_data = nullptr;
	this->m_rows = 0;
	this->m_cols = 0;
}
Matrix::Matrix(int rows, int cols)
{
	m_rows = rows;
	m_cols = cols;
	m_data = new int* [rows];
	for (int i = 0; i < m_rows; i++)
	{
		m_data[i] = new int[m_cols];
		for (int j = 0;j < m_cols; j++)
		{
			m_data[i][j] = 0;
		}
	}
}
Matrix::~Matrix()
{
	erase();
}
Matrix::Matrix(const Matrix& other)
{
	copy(other);
}
Matrix& Matrix:: operator=(const Matrix& other)
{
	if (this != &other)
	{
		erase();
		copy(other);
	}
	return *this;
}
Matrix::Matrix(Matrix&& other)
{
	m_rows = other.m_rows;
	m_cols = other.m_cols;

	m_data = other.m_data;
	other.m_data = nullptr;
	other.m_rows = 0;
	other.m_cols = 0;
}
Matrix& Matrix:: operator=(Matrix&& other)
{
	if (this!= &other)
	{
		erase();
		m_rows = other.m_rows;
		m_cols = other.m_cols;

		m_data = other.m_data;
		other.m_data = nullptr;
		other.m_rows = 0;
		other.m_cols = 0;
	}
	return *this;
}
Matrix Matrix :: operator+(const Matrix& other) const
{
	
}
Matrix Matrix:: operator-(const Matrix& other) const;
{

}
Matrix operator*(const Matrix& other) const;
{

}