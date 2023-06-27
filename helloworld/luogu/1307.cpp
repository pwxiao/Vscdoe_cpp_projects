#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n,m = 0;
    cin>>n;
    while(abs(n)>0){
        int t = n%10;
        m=10*m+t;
        n/=10;
    }

        printf("%d",m);       

 
}