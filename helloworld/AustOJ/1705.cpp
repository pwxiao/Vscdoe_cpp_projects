#include <iostream>
#include <math.h>
using namespace std;

int isFlowerNum(int n){
    int c = n%10;
    int b = (int)(n%100/10);
    int a = (int)(n/100);
    if( pow(a,3) + pow(b,3) + pow(c,3) == n){
        return 1;
    }
    return 0;
}
int main(){
    int a,b;
    cin>>a>>b;
    int flag = 0;
    for(int j = a;j<=b;j++){
        if(isFlowerNum(j)){
            cout<<j<<endl;
            flag=1;
        }
    }
    if(!flag){
        cout<<"NO"<<endl;
    }
    return 0;
}