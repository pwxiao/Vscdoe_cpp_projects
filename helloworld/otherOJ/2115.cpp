#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    
    
    float boyH[41];
    float girlH[41];
    int i=0,j=0;
    while(t--){
        char sex[6];
        float height;
        cin>>sex>>height;
        if(sex[0] == 'm'){
            boyH[i++] = height;
        }else{
            girlH[j++] = height;
        }
    }
    sort(boyH,boyH+i);
    sort(girlH,girlH+j);
    
    for(int k = 0;k<i;k++){
       
        printf("%.2f ",boyH[k]);
    }
    for(int k = i-1;k>=0;k--){
        printf("%.2f ",girlH[k]);
    }

    return 0;
}