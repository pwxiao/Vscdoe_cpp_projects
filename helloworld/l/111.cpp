#include <bits/stdc++.h>
using namespace std;
int main()
{
    char ch;
    int n;
    
    scanf("%d", &n); getchar();
    for (int m = 0; m < n; m++)
    {
        stack<char> s;
        while (true)
        {
            ch = getchar();
            if (ch == ' ' || ch == '\n' || ch == EOF)
            {
                while (!s.empty())
                {
                    printf("%c", s.top());
                    s.pop();
                }
                printf(" ");
                if (ch == '\n' || ch == EOF)
                    break;
            }
            else
            {
                s.push(ch);
            }
        }
        printf("\n");
    }

    return 0;
}