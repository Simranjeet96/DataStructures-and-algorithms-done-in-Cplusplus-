#include <iostream>
template<class T>
void foo<T>(T data)
{
	std::cout<<data;
}

foo<int>(data);