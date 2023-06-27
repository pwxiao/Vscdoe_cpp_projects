#include <iostream>
#include <cstring>
using namespace std;
void sort(char *name[],int n){
    for(int i = 0;i<n-1;i++){
        for(int j = 0;j<n-1-i;j++){
            if(*name[j]<*name[j+1]){
                char *t;
                t = name[j];
                name[j] = name[j+1];
                name[j+1] =  t;
            }
        }
    }
}
int main(){
    char *name[3] = {"aekk","csd","bwf"};
    sort(name,3);
    cout<<*name[1]<<endl;
    for(int i = 0;i<3;i++) cout<<name[i]<<" ";
    return 0;
}
