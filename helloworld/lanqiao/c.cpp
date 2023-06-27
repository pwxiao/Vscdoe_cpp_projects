#include <iostream>
#include <math.h>
using namespace std;
int hexToOct(int hex){
    int flag = 0;
    int result = 0;
    while(hex){
        int res = hex%10;
        result +=res*pow(16,flag);
        flag++;
        hex /= 10;
    }
    return result;
}
int main(){
    int n = 10;
    while(1){
        if((hexToOct(n) % n )== 0){
            cout<<n;
            break;
        }
        n++;
    }
    return 0;
}