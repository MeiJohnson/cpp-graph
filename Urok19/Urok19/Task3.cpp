#include <iostream>

//��������� �1:
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

//������ ����������, ������� ����� ���������� ���������� � �������

//��������� �2:

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

//������ ����������, ������� ����� ���������� ���������� � �������, ��� ��� � ��������� �������� ���������� ����������.

//��������� �3

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

//������ ��������. �������� ��������� ��� ���������, � ����������� ������� ���

//��������� �4

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

//��������� ���������� ��� ������