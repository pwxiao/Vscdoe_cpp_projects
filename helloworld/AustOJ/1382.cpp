#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        int len;
        scanf("%d", &len);
        for (int j = 0; j < 3 * len; j++)
        {
            for (int i = 0; i < len; i++)
            {
                printf("ACM");
            }
            printf("\n");
        }
    }
    return 0;
}