#include <iostream>
#include <time.h>
using namespace std;

int main(){
    srand(time(NULL));
    int a[100];
    for(int i = 0;i<100;i++) a[i] = rand()%101;
    int s;
    cin>>s;
    int flag = 0;
    for(int i = 0;i<100;i++){
        if(s == a[i]){
            flag = i;
        }
    } 
    if(flag){
        cout<<flag;
    }else{
        cout<<"No FOUND";
    }
    return 0;
}