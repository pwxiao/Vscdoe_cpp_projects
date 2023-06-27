#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long arr[101][101] = {1};
    int l;
    vector<int> sum;
    int n = 0;
    for (int i = 1; i < 6; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            arr[i][i] = 1;
            arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
            sum.push_back(arr[i][j]);
        }
    }
    cin >> l;
    for (int k = 0; k < sum.size(); k++)
    {
        if (l == sum[k])
        {
            cout << k + 1;
        }
    }
    return 0;
}