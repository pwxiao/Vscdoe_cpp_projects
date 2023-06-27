#include <iostream>
#include <string>
#include <sstream>
#include <bits/stdc++.h>
using namespace std;
string tostring(int n){
    stringstream ss;
    string a;
    ss<<n;
    ss>>a;
    return a;
}
int judge(int n){
    string str = tostring(n);
    string str1 = "";
    for(int i = str.length()-1;i>=0;i--){
        str1 += str[i];
    }
    if(str1 == str){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    for(int i = 1000;i<10000;i++){
        if(judge(i)){
            cout<<i<<endl;
        }
    }
    return 0;
}