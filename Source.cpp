#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    int k;
    cin >> k;
    switch (k)
    {
    case 1: cout << "�����";break;
    case 2: cout << "�������������������";break;
    case 3: cout << "�����������������";break;
    case 4: cout << "������";break;
    case 5: cout << "�������";break;
    default: cout << "������";break;
    }
}