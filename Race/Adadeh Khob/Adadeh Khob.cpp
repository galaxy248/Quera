#include <iostream>

using namespace std;

int function(int* a)
{
	int n = 2;
	for (int i = 2; i <= (*a / 2) + 1; i++)
	{
		if (*a % i == 0)
		{
			n++;
		}
	}
	return n;
}

int main()
{
	int sum = 0, n = 0, k;
	cin >> k;
	if (k == 2)
	{
		cout << "3";
		return 0;
	}
	while (true)
	{
		n++;
		sum += n;
		if (function(&sum) >= k)
		{
			cout << sum;
			return 0;
		}
	}
}