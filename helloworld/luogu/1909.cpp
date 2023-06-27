#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int tatal;
    int a[3][2];
    int res[3];
    cin>>tatal;
    for(int i = 0;i<3;i++){
        cin>>a[i][0]>>a[i][1];
    }
    for(int i = 0;i<3;i++){
        int temp = tatal%a[i][0];
        if(temp!=0){
            res[i] = (tatal/a[i][0]+1)*a[i][1];
        }else{
            res[i] = (tatal/a[i][0])*a[i][1];
        }
    }
    sort(res,res+3);
    cout<<res[0];
    return 0;
}