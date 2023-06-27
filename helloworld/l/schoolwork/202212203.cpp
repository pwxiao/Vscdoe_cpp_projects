#include <iostream>
using namespace std;
const double pi = 3.1415926;
double area(double r,double *girth){
    *girth = 2*pi*r;
    return  pi*r*r;
}

int main(){
    double r,c=0;
    double *p = &c;
    scanf("%lf",&r);
    printf("面积是%f\n",area(r,p));
    printf("周长是%f",c);
    return 0;
}
