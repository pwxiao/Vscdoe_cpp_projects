#include <iostream>
using namespace std;
int main()
{
    char a[20]="abcdef";
    int *ptr = (int *)a; // 强制类型转换并不会改变a的类型
    char *ptrs = a;
    printf("%p  %p\n",ptr,ptrs);
    ptr++;

    ptrs++;
    printf("%p  %p\n",ptr,ptrs);
    cout<<*ptrs<<endl;
    cout<<*ptr<<endl;

    return 0;
}