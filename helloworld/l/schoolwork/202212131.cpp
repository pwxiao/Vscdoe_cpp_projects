#include <iostream>
using namespace std;
int a[7][7] = {0};
int main(){
    a[0][0] = 1;
    a[1][1] = 1;
    for(int i = 1;i<7;i++){
        for(int j = 1;j<i+1;j++){
            a[i][j] = a[i-1][j-1]+a[i-1][j];
        }
    }
    for(int i = 1;i<7;i++){
        for(int j = 1;j<i+1;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}