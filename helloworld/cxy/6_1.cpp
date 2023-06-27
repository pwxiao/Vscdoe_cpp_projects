#include <iostream>
using namespace std;

int deldigital(char *s){
    int i,j;
    int count = 0;
    for(i = 0,j = 0;s[i]!='\0';i++){
        if(s[i]<'0' || s[i]>'9'){
            s[j] = s[i];
            j++;
        }else{
            count++;
        }
    }
    s[j] = '\0';
    return count;
}
int main(){
    char s[1000];
    scanf("%s",s);
    int count = deldigital(s);
     printf("删除数字字符后的字符串为：%s\n", s);
    printf("删除的数字字符数量为：%d\n", count);
    return 0;
}