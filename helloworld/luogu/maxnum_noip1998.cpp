#include <bits/stdc++.h>
using namespace std;

bool cmp(string x, string y)
{
    return (x + y) > (y + x);
}
int main()
{
    int n;
    scanf("%d", &n);
    vector<string> data;
    string tmp;
    for(int i = 0;i<n;i++)
    {
        cin>>tmp;
        data.push_back(tmp);
    }
    sort(data.begin(), data.end(), cmp);
    for (int i = 0; i < n; i++)
    {
        cout << data[i];
    }
    return 0;
}