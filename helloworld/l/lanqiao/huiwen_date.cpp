#include <bits/stdc++.h>
#include <string>
using namespace std;

bool judge(int n){
    string p = to_string(n);
    string pre;
    for(int i = p.length()-1;i>=0;i--){
        pre.push_back(p[i]);
    }
    if(pre==p){
        return true;
    }
    return false;
}

bool judges(int n){
    string p = to_string(n);
    if(judge(n) && p[1]==p[3] && p[0]==p[2]){
        return true;
    }
    return false;
}
int str2int(string a){
    stringstream sstream;
    int b;
    sstream<<a;
    sstream>>b;
    return b;
}
int isValid(int n){
    string s = to_string(n);
    string subYue = s.substr(4,2);
    string subRi = s.substr(6,2);
    if(str2int(subYue)<=12 && str2int(subRi)<=31){
        return true;
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    int k = 0;
    while(1){
        n++;
        if(judge(n)){
            cout<<n<<endl;
            break;
        }
    }
    while(1){
        n++;
        if(judges(n)){
            cout<<n<<endl;
            break;
        }
    }
   // isValid(20209202);
    //cout<<n<<endl;
    return 0;
}