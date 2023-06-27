#include <iostream>
using namespace std;

int  mm;
int arr[200001];

int getSum(int i,int j){
    return arr[j]-arr[i];
}

int main(){
    cin>>mm;
    int len = mm;
    for(int  i =1;i<len;i++){
        arr[i] = i;
    }
    for(int j = 1;j<len;j++){
        arr[j] = arr[j-1]+arr[j];
    }
    for(int m = 1;m<len;m++){
        for(int n = m;n<len;n++){
            if(getSum(m,n)==mm){
                cout<<m+1<<" "<<n<<endl;
            }
        }
    }

    return 0;
}