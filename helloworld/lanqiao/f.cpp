#include <iostream>
using namespace std;
int main(){
    float t,c,s;
    float speed;
    cin>>t>>c>>s;
    speed = c/t*1.0;
    float result = s*1.0/speed - t;
    cout<<int(result);
    return 0;
}