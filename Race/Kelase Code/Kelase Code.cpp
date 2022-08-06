#include <iostream>

using namespace std;

int lenOfInt(int n)
{
	int count = 0;
	while (n)
	{
		count++;
		n /= 10;
	}
	return count;
}

int tavan(int n)
{
	int pow = 1;
	for (int i = 0; i < n; i++)
	{
		pow *= 10;
	}
	return pow;
}

int main()
{
	int k;
	cin >> k;
	for (int i = 1; i <= 5000; i++)
	{
		if ((k - lenOfInt(i)) <= 0)
		{
			cout << (i / tavan(lenOfInt(i) - k)) % 10;
			return 0;
		}
		else
		{
			k -= lenOfInt(i);
		}
	}
}
