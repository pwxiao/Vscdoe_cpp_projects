#include <iostream>
using namespace std;
int sum;
int main(){
    int res = 11;
    int n = 0, m;
    while(n<21){
        m = n*100+res;
        sum+=m;
        n++;
    }
    cout<<sum;
    return 0;
}

for(int i = 0;i<b;i++){
    if(b%i == 0){
        return 0;
        break;
    }
}