#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    float n;
    float fee;
    cin>>n;
    if(n>5){
        fee = 10+2*1.8+(n-5)*2.7;
    }else if(n>3){
        fee = 10+(n-3)*1.8;
    }else{
        fee = 10;
    }
    cout<<fixed<<setprecision(2)<<fee;
    return 0;
}