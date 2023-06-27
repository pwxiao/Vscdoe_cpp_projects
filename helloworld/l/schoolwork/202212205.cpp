#include <iostream>
#define N 10
using namespace std;
void quick_sort(int a[], int l, int r);
int fun(int s[], int *x);
int main()
{
    int s[N], M;
    for (int i = 0; i < N; i++)
        scanf("%d", s + i);
    cout << "不及格人数：" << fun(s, &M) << endl;
    cout << "优秀人数：" << M << endl;
    for (int i = 0; i < N; i++)
        cout << s[i] << " ";
    return 0;
}

int fun(int s[], int *x)
{
    int *p = s;
    *x = 0;
    int y = 0;
    for (int i = 0; i < N; i++)
    {
        if (s[i] > 90)
            (*x)++;
        if (s[i] < 60)
            y++;
    }
    quick_sort(s, 0, N - 1);
    return y;
}

void quick_sort(int a[], int l, int r)
{
    if (l >= r)
        return;
    int x = a[l];
    int i = l - 1;
    int j = r + 1;
    while (i < j)
    {
        do
            i++;
        while (a[i] > x);
        do
            j--;
        while (a[j] < x);
        if (i < j)
            swap(a[i], a[j]);
        else
            quick_sort(a, l, j), quick_sort(a, j + 1, r);
    }
}