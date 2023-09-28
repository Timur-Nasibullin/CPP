#include <iostream>

using namespace std;

int main()
{
	int a, b;
	a = 9;
	b = 5;

	// Если делятся целые числа, то результат также будет целым.
	// Для решения проблемы испольуется приведение типов: (<тип>) <переменная>
	cout << (double)a / b << endl;

	// Остаток от деления %
	cout << a % b;
    return 0;
}