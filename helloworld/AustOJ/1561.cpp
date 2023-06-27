#include <iostream>
using namespace std;
const int len = 4;

void sort(int tab[],int len);

int main(){
    int n;
    int arr[4][4];
    cin>>n;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<4;j++){
            cin>>arr[i][j];
        }
    }
    for(int c =0;c<n;c++){
        sort(arr[c],len);
    }

    for(int a = 0;a<n;a++){
        for(int b = 0;b<4;b++){
            cout<<arr[a][b]<<" ";
        }
        printf("\n");
    }
    return 0;
}


void sort(int tab[],int len){
    int temp;
    for(int i = 0;i<len;i++){
        int k = i;
        for(int j = i;j<len;j++){
            if(tab[k]>tab[j]){
                k = j;
            }
        }
        if(k!=i){
            temp = tab[k];
            tab[k] = tab[i];
            tab[i] = temp;
            
        }
    }
}