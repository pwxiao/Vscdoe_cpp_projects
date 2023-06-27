#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if((n%4==0&&n%100!=0) || n%400==0){
        cout<<"闰年";
    }else{
        cout<<"不是闰年";
    }
    return 0;
}