#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int money,year;
    float rate;
    scanf("%d%d%f",&money,&year,&rate);
    float sum = money*pow(1+rate,year);
    printf("%0.1f",sum);
    return 0;
}