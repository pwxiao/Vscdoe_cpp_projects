#include <stdio.h>

int main()
{
    printf("%d",reverse(4321));
    return 0;
}

int reverse(int n){
    ​n*=10;
    ​int res = 0;
    ​while(n!=0){

        ​int a = n%10;

    ​    ​res+=10*res+a;

    ​    ​n/=10;

    ​​}

    ​return res;

}