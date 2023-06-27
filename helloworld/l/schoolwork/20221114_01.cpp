#include <iostream>
using namespace std;

int main(){
    int i = 1;
    while(i<200){
        if(i<101){
            cout<<i<<" ";
        }else{
            cout<<200-i<<" ";
        }
        i++;
    }
    return 0;
}