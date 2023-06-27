#include <iostream>
using namespace std;
int main(){
    unsigned long long n;
    unsigned long long result;
    cin>>n;
    if(n%2==0){
        result= n/2*(1+n);
    }else{
        result = (n-1)/2*n+n;
    }
    cout<<result;
    return 0;
}