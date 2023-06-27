#include <iostream>
using namespace std;

int factor(int n){
    long long result = 1;
    for(int i = 1;i<=n;i++){
        result =result*i;
    }
    return result;
}

int factors(int n){
    if(n==1) return 1;
    else
    return n*(factors(n-1));
}


int main(){
    int m,l=0;
    scanf("%d",&m);
    for(int i =1;i<=m;i++){
        l = l+factor(i);
    }
    printf("%d",l);
    return 0;
}