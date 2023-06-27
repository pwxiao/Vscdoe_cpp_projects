#include <stdio.h>


typedef struct Student
{
    char name[10];
    int tickets;
} stu;


int main(){

    for(int i = 6;i<101;i++){
        for(int j = 2;j<i-1;j++){
            if(i%j==0){
                break;
            }
            if(j == i-2) printf("%d",i);
        }
    }
    return 0;
}