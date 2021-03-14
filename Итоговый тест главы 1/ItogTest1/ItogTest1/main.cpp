#include <iostream>
using namespace std;

int readNumber();
void writeAnswer(int answer);

int main() {
    setlocale(LC_ALL, "");
    int num1 = readNumber();
    int num2 = readNumber();

    int res = num1 + num2;
    writeAnswer(res);

    return 0;
}

int readNumber() {
    cout << "Введите число" << endl;
    int number;
    cin >> number;

    return number;
}

void writeAnswer(int answer) {
    cout << "Ответ: " << answer << endl;
}