#include <iostream>
const int N = 1001;
using namespace std;
void quicksort(int a[],int l,int r){
    if(l>=r) return;
    int x = a[l];int i =  l-1;int j = r+1;
    do i++;while(a[i]<x);
    do j--;while(a[j]>x);
    if(i<j) swap(a[i],a[j]);
    quicksort(a,l,j);
    quicksort(a,j+1,r);
}
int main(){
    int n;
    int a[N];
    for(int i = 0;i<3;i++) scanf("%d",&a[i]);
    quicksort(a,0,2);
    for(int j = 0;j<3;j++) printf("%d ",a[j]);
    return 0;
}
struct {
    messgae = "helloworld"
}
