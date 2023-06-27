#include <iostream>

using namespace std;



int sum(int n){
    int s = 1;
    for(int i = 1;i<=n;i++){
        s = s*i;
    }
    return s;
}
int main(){
    int m = 10;
    int tatal;
    for(int j = 1;j<=10;j++){
        tatal = tatal+sum(j);
    }
    cout<<"sum="<<tatal<<endl;
    return 0;
}