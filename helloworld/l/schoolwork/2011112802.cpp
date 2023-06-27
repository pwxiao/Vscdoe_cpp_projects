#include <iostream>
using namespace std;
#define PI 3.1415926
float solveCircle(float r){
    return PI*r*r;
}

int main(){
    float n;
    cin>>n;
    cout<<solveCircle(n);
    return 0;
}