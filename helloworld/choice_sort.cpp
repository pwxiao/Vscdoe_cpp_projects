#include <iostream>
using namespace std;


void sort(int a[],int n){
    int temp;
    for(int i = 0;i<n;i++){
        for(int j = i+1;j<n;j++){
            if(a[i]>=a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}


void sort_enhance(int a[],int n){
    int temp;
    for(int i =0;i<n;i++){
        int k = i;
        for(int j = i+1;j<n;j++){
            if(a[j]<a[k]){
                k = j;
            }
        }
        if(k!=i){
            temp = a[k];
            a[k] = a[i];
            a[i] = temp;
        }
    }
}



int main(){
    int tab[] = {1,3,2,5,7,8,2};
    int n = 7;
    sort_enhance(tab,7);

    for(int k  =0 ;k<n; k++){
        cout<<tab[k]<<endl;
    }
}
