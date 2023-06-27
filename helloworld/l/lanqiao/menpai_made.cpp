#include <bits/stdc++.h>
#include <string>
using namespace std;
int main(){
    int k,n=0;
    for(int i= 0;i<2021;i++){
        string str =to_string(i); 
        k = count(str.begin(),str.end(),'2');
        n+=k;
    }
    cout<<n;
    return 0;
}