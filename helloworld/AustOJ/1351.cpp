#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a,b,c;
    a = n/100;
    b = n/10%10;
    c = n%10;
    if(a<c){
        swap(a,c);
    }
    if(a<b){
        swap(a,b);
    }
    if(b<c){
        swap(b,c);
    }
    cout<<a<<b<<c;
    return 0;
}