#include <iostream>
using namespace std;

int  find (int *p,  int  len,  int  num){

    int flag = 0;
    for(int j = 0;j<len;j++){
        if(*(p+j)==num){
            flag = 1;
        }
    }
    return flag;
}


int main(){
    int size,target;
    int array[101];
    scanf("%d",&size);
    for(int i = 0;i<size;i++){
        scanf("%d",&array[i]);
    }
    scanf("%d",&target);

    int *pa;
    pa = array;
    find(pa,size,target);
    if(find(array,size,target)){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}

