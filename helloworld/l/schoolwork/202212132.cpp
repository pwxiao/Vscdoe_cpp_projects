#include <iostream>
#include <string.h>
int b,c,d,e;
using namespace std;
int main(){
    char a;
    while((a=getchar())!=EOF&&a!='\n'){
        if(a>64 &&a<91){
            b++;
        }else if(a>96 &&a<123){
            c++;
        }else if(a>='0' &&a<='9'){
            d++;
        }else{
            e++;
        }
    }
    printf("大写字母： %d\n小写字母： %d\n数字： %d\n其他： %d",b,c,d,e);
    return 0;
}