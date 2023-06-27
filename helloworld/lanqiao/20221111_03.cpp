#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int max = arr[0],min = arr[0];
    for(int j = 0;j<n;j++){
       
        if(max<arr[j]){
            max = arr[j];
        }
        if(min>arr[j]){
            min = arr[j];
        }
    }
    int sum = 0;
    for(int q = 0;q<n;q++){
        sum+=arr[q];
    }
    cout<<max<<endl;
    cout<<min<<endl;
    cout<<sum<<endl;
    return 0;
}