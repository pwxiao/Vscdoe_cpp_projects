#include <iostream>

using namespace std;

void sort(int tab[],int n){
    int temp;
    for(int i = 0;i<n-1;i++){
        for(int j = 0;j<n-1-i;j++){
            if(tab[j]>tab[j+1]){ 
            swap(tab[j],tab[j+1]);
        }
        }
    }
}

void bubble_sort(int arr[],int n){
    int temp;
    for(int i = 0;i<n-1;i++){
        for(int j = 0;j < n-1-i;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp; 
            }
        }
    }
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int k = 0;k<n;k++){
        cin>>arr[k];
    }
    sort(arr,n);
    for(int m = 0;m<n;m++){
        cout<<arr[m]<<" ";
    }
    return 0;
}