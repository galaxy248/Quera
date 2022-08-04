#include <iostream>
#include <string>
#include <string.h>

using namespace std;

int main()
{
	char v1[60], v2[60];
	cin >> v1 >> v2;
	if (*v1 == v2[strnlen(v2, 60) - 1])
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}

	return 0;
}
