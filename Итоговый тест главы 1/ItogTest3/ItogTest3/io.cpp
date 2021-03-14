#include <iostream>
using namespace std;

int readNumber() {
    cout << "Введите число" << endl;
    int number;
    cin >> number;

    return number;
}

void writeAnswer(int answer) {
    cout << "Ответ: " << answer << endl;
}