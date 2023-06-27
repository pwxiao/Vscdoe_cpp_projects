#include <iostream>
using namespace std;
int main(){
    int a = 2022;
    while(1){
        a++;
        if((a&63)==0){
            cout<<a;
            break;
        }
    }
    return 0;
}