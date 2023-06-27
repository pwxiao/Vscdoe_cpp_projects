#include <iostream>
#include <time.h>
using namespace std;

void bubble_sort(int arr[], int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - 1 - i; j++)
        {
            if (arr[j + 1] > arr[j])
            {
                swap(arr[j + 1], arr[j]);
            }
        }
    }
}

int main()
{
    int scores[30] = {0}, a = 0, b = 0;
    srand(time(NULL));
    for (int i = 0; i < 30; i++)
        scores[i] = rand() % 101;
    int flag = 1;
    for (int i = 0; i < 30; i++)
    {
        cout << scores[i] << " ";
        if (flag % 10 == 0)
            cout << endl;
        flag++;
    }

    bubble_sort(scores, 30);

    cout << "排序后：" << endl;
    for (int i = 0; i < 30; i++)
    {
        cout << scores[i] << " ";
        if (flag % 10 == 0)
            cout << endl;
        if (scores[i] >= 90)
            a++;
        if (scores[i] < 60)
            b++;
        flag++;
    }
    cout << endl
         << "优秀人数： " << a << endl;
    cout << "不及格人数： " << b;

    return 0;
}