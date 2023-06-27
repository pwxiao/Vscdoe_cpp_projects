#include <iostream>
#include <cstring>
using namespace std;
int palindrome(char *s);
int main(){
    char s[10];
    gets(s);
    if(palindrome(s)) cout<<"是";
    else cout<<"不是";
    return 0;
}
int palindrome(char *s){
    char *q;
    int flag=1;
    q = s+strlen(s)-1;
    while(s<q){
        if(*s!=*q){
            flag = 0;
            break;
        }
        s++;
        q--;
       
    }
    return flag;
}