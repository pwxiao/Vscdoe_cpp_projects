#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    const float PI = 3.1415;
    int r,h;
    cin>>r>>h;
    float v;
    v = PI*r*r*h;
    cout<<fixed<<setprecision(2)<<v;
    return 0;
}