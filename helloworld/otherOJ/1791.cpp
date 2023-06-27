#include <iostream>
#include <string.h>
using namespace std;
int isPrime(int n);
int main(){
    char str[10000];
    int T[30]={0};
    int min = 9999;
    int max = 0;
    cin>>str;
    for(int i = 0;i<strlen(str);i++){
        T[str[i]-'a']++;
    }
    for(int i = 0;i<26;i++){
        if(T[i]>max && T[i]!=0){
            max = T[i];
        }
        if(T[i]<min && T[i]!=0){
            min = T[i];
        }
    }
    if(isPrime(max-min)){
        cout<<"Lucky Word"<<endl;
        cout<<max-min<<endl;
    }else{
        cout<<"No Answer"<<endl;
        cout<<0<<endl;
    }
    cout<<isPrime(1);
    return 0;
}

int isPrime(int n){
    int flag = 1;
    if(n==1){
        return 0;
    }
    for(int i = 2;i<n;i++){
        if(n%i==0){
            flag=0;
        }
    }
    return flag;
}