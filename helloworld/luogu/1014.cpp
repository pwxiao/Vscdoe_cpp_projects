#include <iostream>
using namespace std;
int main(){
    int t,up,down;
    cin>>t;
    int m=0,n = 0;
    while(m<t){
        n++;
        m+=n;
    }
    int flag = t-m+n-1;
    if(n%2){
         up = n-flag;
         down = n+1-up;
    }else{
         down = n-flag;
         up = n+1-down;
    }
    printf("%d/%d",up,down);
    return 0;
}