#include <iostream>
const int N =  10001;
using namespace std;
void quick_sort(int a[],int l,int r){
    if(l>=r) return;
    int x = a[l];int i = l-1;int j = r+1;
    do i++; while(a[i]<x);
    do j--; while(a[j]>x);
    if(i<j) swap(a[i],a[j]);
    quick_sort(a,l,j);
    quick_sort(a,j+1,r);
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
    int n,m,a[N]; scanf("%d %d",&n,&m);
    for(int i = 0;i<n;i++) cin>>a[i];
    bubble_sort(a,n);
    int min = a[0];int flag = 1;
    int k = 300001;
    for(int i = 0 ; i<n ; i++){
        if(a[i]>min){
            min = a[i];
            flag++;
        }
        if(flag == m ){
            k = a[i];
            break;
        }
    }
    if(k == 300001) cout<<"NO RESULT";
    else cout<<k;
    return 0;
}

/**scanf("%d",a[n])
 *  quick_sort(a,0,n-1);
    int min = a[0];int flag = 0;
    for(int i = 0 ; i<n ; i++){
        if(a[i]>min){
            swap(min,a[i]);
            flag++;
        }
        if(flag == m ){
            cout<<a[i];
        }
    }
*/