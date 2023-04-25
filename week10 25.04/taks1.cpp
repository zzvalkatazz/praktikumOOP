#include<iostream>
using namespace std;
template <typename T>
void swapT(T& a, T& b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}
int main()
{
	int a, b;
	a = 10, b = 20;
	swapT(a, b);
}