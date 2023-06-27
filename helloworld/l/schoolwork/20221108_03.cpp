#include <iostream>
using namespace std;
int main()
{
    int n,price;
    cin>>n;
    if (n > 50)
    {
        price = 30 + (n-10)*2;
    }
    else if (n > 10)
    {
        price = 30 + (n-10)*2.5;
    }
    else
    {
        price = 30;
    }

    if(price>=180){
        price=180;
    }
    cout<<price;
    return 0;
}