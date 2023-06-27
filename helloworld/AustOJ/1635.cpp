#include <iostream>
using namespace std;

int isPrime(int m)
{
    int flag = 1;
    for (int i = 2; i < m; i++)
    {
        if (m % i == 0)
        {
            flag = 0;
        }
    }
    return flag;
}

int main()
{
    int m, n;
    scanf("%d%d", &m, &n);
    int g = 0;
    for (int i = m; i <= n; i++)
    {
        if (isPrime(i))
        {
            printf("%d ", i);
            g++;
        }
        if (g == 10)
        {
            printf("\n");
            g = 0;
        }
    }
    return 0;
}