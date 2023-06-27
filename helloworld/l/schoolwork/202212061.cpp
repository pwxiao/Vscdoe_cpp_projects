#include <iostream>
#include <math.h>
using namespace std;
int main(){
    float a[10];
    int ave = 0;
    for(int i = 0;i<10;i++){ 
        cin>>a[i];
        ave+=a[i];
    }
    ave = ave/10;
    static int flag = 0;
    int min = fabs(ave-a[0]);
    for(int i = 0;i<10;i++){
        int s = fabs(ave-a[i]);
        if(s<min){
            min = s;
            flag = a[i];
        }
    }
    cout<<flag;
    return 0;
}