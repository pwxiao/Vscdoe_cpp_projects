#include <iostream>
using namespace std;
int main(){
    int n =10;
    int max=1;
    while(n--){
        int a;
        scanf("%d",&a);
        if(a>max){
            max=a;
        }
    }
    cout<<max<<endl;
    return 0;
}