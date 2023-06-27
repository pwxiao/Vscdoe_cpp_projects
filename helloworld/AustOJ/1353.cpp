#include <iostream>
using namespace std;
int main(){
    int num[] = {1,2,3,4,5,6,7};
    int n;
    string day[] = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
    cin>>n;
    for(int i = 1;i<8;i++){
        if(n==i){
            cout<<day[i-1];
        }
    }
    return 0;
}