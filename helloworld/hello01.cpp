#include<stdio.h>
int main()
{
	int i,n,F[40]={0};
	F[0]=1,F[1]=1;
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		F[i]=F[i-2]+F[i-1];
	 } //先给数组里的元素全都准备好

    for(int i = 0;i<n;i++){
        if(i%5==0)
		{   
		    printf("\n"); 
		} 
		printf("%12d",F[i]);

     }
	 return 0;
}