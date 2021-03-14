#include <iostream>

void multiply(int a, int b)
{
	return a * b;
}

int main()
{
	std::cout << multiply(7, 8) << std::endl;
	return 0;
}

// Функция multiply не возвращает ничего (void), но для корректной работы должна возвращать int.