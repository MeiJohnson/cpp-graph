#include <iostream>
using namespace std;

int readNumber();
void writeAnswer(int);

int main() {
    setlocale(LC_ALL, "");
    int num1 = readNumber();
    int num2 = readNumber();

    int res = num1 + num2;
    writeAnswer(res);

    return 0;
}

