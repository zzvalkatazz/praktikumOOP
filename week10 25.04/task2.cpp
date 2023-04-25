#include<iostream>
template <typename T>
class Set {
private:
	void copy(Set const& other);
	void resize();
protected:
	T* items;
	int capacity;
	int count;
public:
	Set();
	Set( const Set<T> & other);
	~Set();
	void add(T const&);
	bool isEmpty();
	void print();
	bool contains(const T& element);
	Set& operator=(const Set<T>& other);
	Set operator+(const T& other) const;

};
template <typename T>
void Set<T>::copy(Set const& other)
{
	delete[]items;
	capacity = other.capacity;
	count = other.count;
	items = new T[capacity];
	for (int i = 0; i < count; i++)
	{
		items[i] = other.items[i];
	}
}
template<typename T>
void Set<T>::resize()
{
	capacity *= 2;
	T* newData = new T[capacity];
	for (int i = 0; i < count; i++)
	{
		newData[i] = items[i];
	}
	delete[]items;
	items = newData;
}
template<typename T>
Set<T>::Set()
{
	capacity = 20;
	count = 0;
	items = new[capacity];
}
template<typename T>
Set<T>::Set(Set const& other)
{
	copy(other);
}
template <typename T>
Set<T>::~Set()
{
	delete[]items;
}
template<typename T>
Set<T> &Set<T>::operator=(Set const& other)
{
	if (this != &other)
	copy(temp);

	return *this;
}
template<typename T>
bool Set<T>::isEmpty()
{
	return !count;
}
template<typename T>
void Set<T>::add(T const& temp)
{
	for (int i = 0; i < count; i++)
	{
		if (items[i] == temp)
		{
			return;
		}
	}
	if (count == capacity)
	{
		resize();
	}
	items[count++] = temp;
}
template<typename T>
Set<T> Set<T> ::operator+(const T& other) const
{
	int newSetSize = size;
	for (int i = 0; i < other.size; i++)
	{
		if (!(*this)[other.numbers[i]])
		{
			newSetSize++;
		}
	}
	unsigned* newSet = new unsigned[newSetSize];
	size_t index = 0;
	for (size_t i = 0; i < size; i++)
	{
		newSet[index++] = numbers[i];
	}
	for (int i = 0; i < other.size; i++)
	{
		if (!(*this)[other.numbers[i]])
		{
			newSet[index++] = other.numbers[i];
		}
	}
	Set result(newSet, newSetSize, count);
	delete[]newSet;
	return result;
}
template<typename T>
bool Set<T>::contains(const T& element)
{
	for (int i = 0; i < contains; i++)
	{
		if (temp[i] == element)
		{
			return true;
		}
	}
	return false;
}