#include <iostream>

int multiply(int a, int b)
{
	int product = a * b;
}

int main()
{
	std::cout << multiply(5) << std::endl;
	return 0;
}

//Проблема 1:
//Функция должна возвращать int, но не возвращает ничего.
//Проблема 2:
//Функция принимает на вход 2 аргумента, а при вызове получате только 1.