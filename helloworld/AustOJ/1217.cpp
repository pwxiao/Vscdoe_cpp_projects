#include <iostream>
using namespace std;
int main(){
    int n;
    int tab[102];
    scanf("%d",&n);
    for(int j = n-1;j>=0;j--){
        scanf("%d",&tab[j]);
    }
    for(int i = 0;i<n;i++){
        cout<<tab[i]<<" ";
    }
    cout<<endl;
    return 0;
}