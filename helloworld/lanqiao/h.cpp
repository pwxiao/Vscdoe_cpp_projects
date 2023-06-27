#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

string s;

bool isNum(string str)
{
    for(int i = 0;i<str.length()/2;i++){
        if(str[i] != str[str.length()-1-i]){
            return false;
        }
    }
    return true;
}

int main()
{
    cin >> s;
    int i = 0;
    int len = s.size();
    for(i = 0; i < len; i++)
    {
        string tmp = s.substr(i, len);
        if(isNum(tmp))
        {
            break;
        }
    }
    string t = s.substr(0, i);
    reverse(t.begin(), t.end());
    cout << s + t;
    return 0;
}
