#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum = 0;
    while(n>10){
        n = n/10;
        sum+=1;
    }
    cout<<sum+1;
    return 0;
}