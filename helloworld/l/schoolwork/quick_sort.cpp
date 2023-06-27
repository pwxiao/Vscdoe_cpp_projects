#include <iostream>
using namespace std;
const int N = 1e6+100;
int a[N];

void quicksort(int a[],int l,int r){
    if(l>=r) return;
    int x = a[l];int i = l-1;int j = r+1;
    do i++; while(a[i]<x);
    do j--; while(a[j]>x);
    if(i<j) swap(a[i],a[j]);
    quicksort(a,l,j);
    quicksort(a,j+1,r);
}

int main(){
    int n;
    scanf("%d",&n);
    for(int i = 0;i<n;i++) scanf("%d",&a[i]);
    quick_sort(a,0,n-1);
    for(int i = 0;i<n;i++) printf("%d ",a[i]);
    return 0;
}