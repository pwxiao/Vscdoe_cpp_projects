#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    double x1,x2;
    int delta = b*b-4*a*c;
    x1 = (-b+sqrt(delta))/(2*a);
    x2 = (-b-sqrt(delta))/(2*a);
    printf("%f %f",x1,x2);
    return 0;
}