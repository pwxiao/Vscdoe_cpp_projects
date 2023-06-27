#include<cstdio>
using namespace std;
int m,n,p,q,mins=999;
int a[100][100];//1表示空地，2表示障碍物 
int v[100][100];
int vectorX[4] = {0,1,0,-1};
int vectorY[4] = {1,0,-1,0};
void dfs(int x,int y,int step)
{
	if(x==p&&y==q)//p，q为终点坐标 
	{
		if(step<mins)
		  mins=step;
		  return;
	}
	for(int i = 0;i <4 ; i++){
		if( a[x+vectorX[i]] [y+vectorY[i]] == 1 && v[x+vectorX[i]] [y+vectorY[i]]==0 ){
        v[x+vectorX[i]][y+vectorY[i]]=1;//设计为1表示已访问 
		dfs(x+vectorX[i],y+vectorY[i],step+1);
		v[x+vectorX[i]][y+vectorY[i]]=0;//设计为0表示未访问
		}
	}
	return; 
}
int main()
{
	int startx,starty; 
	scanf("%d%d",&m,&n);
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		scanf("%d",&a[i][j]);
	}
	scanf("%d%d%d%d",&startx,&starty,&p,&q);
	v[startx][starty]=1;
	dfs(startx,starty,0);
	printf("%d\n",mins);
}