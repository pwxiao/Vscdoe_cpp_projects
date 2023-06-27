#include <iostream>
#include <cstring>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    string a;
    cin>>a;
    int len = a.length();
    for(int i = 0,j = len-1;i<j;i++,j--){
        if(a[i] != a[j]){
            cout<<"不是";
            return 0;
        }
    } 
    cout<<"是";
    return 0;
}