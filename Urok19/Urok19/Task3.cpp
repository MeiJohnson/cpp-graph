#include <iostream>

//Программа №1:
int add(int x, int y);

int main()
{
    std::cout << "3 + 4 + 5 = " << add(3, 4, 5) << std::endl;
    return 0;
}

int add(int x, int y)
{
    return x + y;
}

//Ошибка компиляции, слишком много агрументов передается в функцию

//Программа №2:

int add(int x, int y);

int main()
{
    std::cout << "3 + 4 + 5 = " << add(3, 4, 5) << std::endl;
    return 0;
}

int add(int x, int y, int z)
{
    return x + y + z;
}

//Ошибка компиляции, слишком много агрументов передается в функцию, так как в прототипе неверное количество параметров.

//Программа №3

int add(int x, int y);

int main()
{
    std::cout << "3 + 4 + 5 = " << add(3, 4) << std::endl;
    return 0;
}

int add(int x, int y, int z)
{
    return x + y + z;
}

//Ошибка линковки. Прототип принимает два параметра, а определение функции три

//Программа №4

int add(int x, int y, int z);

int main()
{
    std::cout << "3 + 4 + 5 = " << add(3, 4, 5) << std::endl;
    return 0;
}

int add(int x, int y, int z)
{
    return x + y + z;
}

//Программа запустится без ошибок