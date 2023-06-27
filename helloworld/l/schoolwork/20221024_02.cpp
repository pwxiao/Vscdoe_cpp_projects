#include <iostream>
#define pi 3.1415
using namespace std;

int main(){
    //const float pi = 3.1415;
    int r;
    scanf("%d",&r);
    float a,b;
    a = 2*pi*r;
    b = pi*r*r;
    cout<<a<<" "<<b;
    return 0;
}