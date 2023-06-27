#include <iostream>
using namespace std;

int isPrime(int n){
    int flag = 1;
    for(int i =2;i<n;i++){
        if(n%i==0){
            flag = 0;
        }
    }
    return flag;
}


int main(){
    int i = 2;
    int cout = 0;
    int arr[4];
    int tab[1000];
    while(i<1000){
       if(isPrime(i)){
            cout++;
            tab[cout]=i;
        }
        i++;
    }
   // printf("%d",isPrime(9));
   for(int j = 0;j<4;j++){
    cin>>arr[j];
   }
   for(int m = 0;m<4;m++){
    printf("%d\n",tab[arr[m]]);
   }
    return 0;
}