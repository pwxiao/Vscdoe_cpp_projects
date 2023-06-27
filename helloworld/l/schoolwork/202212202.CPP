#include <iostream>
#define N 10
using namespace std;
int main(){
    srand(time(NULL));
    int num[N],i = 0;
    for(int i = 0;i<N;i++) num[i] = rand()%101+1;
    int *p,*q;
    p =q= num;
    int x=0,n;
    scanf("%d",&n);
    while((p-q)<=N){
        if(*p>n){
            x++;
        }
        p++;
    }
    cout<<x;
    return 0;
}