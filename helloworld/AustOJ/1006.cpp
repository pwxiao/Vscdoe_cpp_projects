#include <iostream>

using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    cout<<a<<endl;
    cout<<b<<endl;
    int i,j;
    if(b>9){
        i = b % 10;
        cout<<i*a<<endl;
        j = (int)b/10;
        cout<<j*a<<endl;
        cout<<a*b<<endl;
    }
    else{
        cout<<a*b<<endl;
    }
    return 0;
}