#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int k;
	cin >> k;
    if (k == 1);
    cout << "�����";
    if (k == 2);
    cout << "�������������������";
    if (k == 3);
    cout << "�����������������";
    if (k == 4);
    cout << "������";
    if (k == 5);
    cout << "�������";
    if (k < 1 || k > 5);
    cout << "������";
}