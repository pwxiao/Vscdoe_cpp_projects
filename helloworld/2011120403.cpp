#include <iostream>
using namespace std;

int reverse(int n){
    //n *=10;
    int res = 0;
    while(n!=0){
        int a = n%10;
        res = 10*res+a;
        n/=10;
    }
    return res;
}

int main(){
    cout<<reverse(124);
    return 0;
}