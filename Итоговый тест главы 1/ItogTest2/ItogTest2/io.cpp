#include <iostream>
using namespace std;

int readNumber() {
    cout << "������� �����" << endl;
    int number;
    cin >> number;

    return number;
}

void writeAnswer(int answer) {
    cout << "�����: " << answer << endl;
}