#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	char s[1005];
	int n;
	cin >> n;
	getchar();
	while (n--)
	{
		cin.getline(s, 1005);
		int k = 0;
		int m = strlen(s);
		for (int i = 0; i < m; i++)
		{
			if (s[i] == ' ')
			{
               for (int j = i - 1; j >= k; j--)
				{
					cout << s[j];
				}
				cout << " ";
				k = i + 1;
			}
		}
		for (int i = m - 1; i >= k; i--)
		{
			cout << s[i];
		}
		cout << endl;
	}
}
