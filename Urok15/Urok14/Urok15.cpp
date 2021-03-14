#include <iostream>

void doMath(int a)
{
    int b = 5;
    std::cout << "doMath: a = " << a << " and b = " << b << std::endl;
    a = 4;
    std::cout << "doMath: a = " << a << " and b = " << b << std::endl;
}

int main()
{
    int a = 6;
    int b = 7;
    std::cout << "main: a = " << a << " and b = " << b << std::endl;
    doMath(a);
    std::cout << "main: a = " << a << " and b = " << b << std::endl;
    return 0;
}
// Вывод:
//main: a = 6 and b = 7
//doMath: a = 6 and b = 5
//doMath : a = 4 and b = 5
//main : a = 6 and b = 7