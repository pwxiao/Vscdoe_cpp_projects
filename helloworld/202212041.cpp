#include <iostream>
#include <time.h>
using namespace std;
const int len = 30;
int score[len]; 
static int up = 0,down = 0;
void statics(int score[],int len){
    for(int i =0;i<len;i++){
        if(score[i]>=90){
            up++;
        }
        if(score[i]<=60){
            down++;
        }
    }
}
void bubbleSort(int arr[],int l){
    for(int i = 0;i<l-1;i++){
        for(int j = 0;j<l-i-1;j++){
            if(arr[j+1]<arr[j]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
int main(){
    srand(time(NULL));
    for(int i = 0;i<len;i++) score[i] = rand()%101+1;
    for(int i = 0;i<len;i++) cout<<score[i]<<" ";
    statics(score,len);
    cout<<endl<<"优秀人数："<<up<<endl<<"不及格人数："<<down<<endl;
    bubbleSort(score,len);
    cout<<"排序后："<<endl;
    for(int i = 0;i<len;i++) cout<<score[i]<<" ";
    return 0;
}
