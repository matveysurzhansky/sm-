#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int k;
	cin >> k;
    if (k == 1);
    cout << "плохо";
    if (k == 2);
    cout << "неудовлетворительно";
    if (k == 3);
    cout << "удовлетворительно";
    if (k == 4);
    cout << "хорошо";
    if (k == 5);
    cout << "отлично";
    if (k < 1 || k > 5);
    cout << "ошибка";
}