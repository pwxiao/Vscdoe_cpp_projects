#include <stdio.h>
int main()
{
    
    while (1)
    {
        scanf("%f", &a);
        if (a == 0)
        {
            break;
        }
        if (a > 0)
        {
            b++;
            c = c + a;
        }
        else
        {
            e++;
            f = f + a;
        }
    }

    printf("%d %.2f\n", b, c);
    printf("%d %.2f", e, f);

    return 0;
}
