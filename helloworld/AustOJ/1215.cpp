#include <iostream>
using namespace std;
int array[3][4];
int main(){
    for(int i = 0;i<3;i++){
        
        for(int j = 0;j<4;j++){
            scanf("%d",&array[i][j]);
        }
        //printf("\n");
    }

    int max = 0;
    for(int i = 0;i<3;i++){
        for(int j = 0;j<4;j++){
            if(max<array[i][j]){
                max = array[i][j];
            }
        }
    }

    cout<<max<<endl;

    return 0;
}