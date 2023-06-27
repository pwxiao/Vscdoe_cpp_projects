#include <iostream>
using namespace std;

int main(){
    char s[20],*p;
    p = s;
    gets(s);
    while(*p!='\0'){
        *p = *p+'a'-'A';
        p++;
    }
    puts(s);
    return 0;
}