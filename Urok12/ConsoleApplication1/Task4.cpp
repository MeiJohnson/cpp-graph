#include <iostream>

void printO()
{
    std::cout << "O" << std::endl;
}

int main()
{
    std::cout << printO() << std::endl;

    return 0;
}

//Выводится ошибка, связанная с тем, что функция print0 ничего не возвращает. 
//Из-за этого cout нечего выводить.