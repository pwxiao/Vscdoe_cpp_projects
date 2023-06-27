#include <iostream>
using namespace std;
int n,a,b;

int main(){
    scanf("%d",&n);
    while(n--){
        scanf("%d %d",&a,&b);
        int cu = 0;
        int res =  0;
        for(int i = 9;i>0;i--){
            cu = a%10 + b%10 + cu;
            cu /= 10;
            if(cu>0) res += 1;
            a /= 10;
            b /= 10;
        }
    printf("%d\n",res);
    }
    printf("%d",9/10);
    return 0;
}