#include <iostream>
using namespace std;
int sum;
int main(){
    int i =1;
    while(i<201){
        if(i%3==0  && i%5==0){
            cout<<i<<" ";
            sum+=1;
        }
        if(sum == 10){
            sum = 0;
            cout<<endl;
        }
        i++;
    }
    return 0;
}