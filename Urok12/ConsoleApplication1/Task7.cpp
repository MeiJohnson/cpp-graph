#include <iostream>

int return6()
{
    return 6;
}

int main()
{
    std::cout << return6 << std::endl;

    return 0;
}

//Программа скомпилируется, вывод:
//1
//Но функция не будет вызвана, так как отсутствуют скобки.