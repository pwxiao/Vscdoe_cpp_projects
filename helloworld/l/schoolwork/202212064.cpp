#include <iostream>
#include <time.h>

using namespace std;
int main(){
    int a[10],b[100] = {0};
    srand(time(NULL));
    for(int i = 0;i<100;i++) b[i] = rand()%10;
    for(int i = 0;i<100;i++){
        a[b[i]]++;
    }
    for(int i = 0;i<10;i++){
        cout<<i<<"出现次数为"<<a[i]<<"次"<<endl;;
    }
    return 0;
}