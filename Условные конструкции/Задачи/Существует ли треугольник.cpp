#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a, b, c, h, c1, c2;
	cin >> a;
	cin >> b;
	cin >> c;
	if ((a > b + c) || (b > a + c) || (c > a + b))
	{
		cout << "yes\n";
		h = max(c, max(a, b));
		c1 = min(c, min(a, b));
		c2 = a + b + c - h - c1;
		if (h * h == c1 * c1 + c2 * c2)
		{
			cout << "?????????????";
		}
		if (h * h > c1 * c1 + c2 * c2)
		{
			cout << "????????????";
		}
		if (h * h < c1 * c1 + c2 * c2)
		{
			cout << "?????????????";
		}

	}
	else
		cout << "no";
    return 0;
}