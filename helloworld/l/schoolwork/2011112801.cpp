#include <iostream>
using namespace std;
int reverse(int n){
    unsigned long long ans,sum;
    n *=10;
    ans = n%10; 
    while(n>0){     
        ans = 10*ans+n%10;
        n/=10;  
    }
    return ans;
}

int main(){
    cout<<reverse(124565654);
    return 0;
}