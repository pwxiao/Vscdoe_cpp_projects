#include<cstdio>
using namespace std;
int m,n,p,q,mins=99;

int map[100][100];//1表示空地，2表示障碍物
int v[100][100];//1表示访问，0表示未访问
void dfs(int x,int y,int step)
{
    if(x==p && y==q){
        if(step<mins){
            mins=step;
            return;
        }
        
    }

    //右
    if(map[x][y+1]==1 && v[x][y+1]==0){
        v[x][y+1]=1;
        dfs(x,y+1,step+1);
        v[x][y+1]=0;
        
    }
    //下
     if(map[x+1][y]==1 && v[x+1][y]==0){
        v[x+1][y]=1;
        dfs(x+1,y,step+1);
        v[x+1][y]=0;
        
    }
    //左
     if(map[x][y-1]==1 && v[x][y-1]==0){
        v[x][y-1]=1;
        dfs(x,y-1,step+1);
        v[x][y-1]=0;
    
    }
    //上
    if(map[x-1][y]==1 && v[x-1][y]==0){
        v[x-1][y]=1;
        dfs(x-1,y,step+1);
        v[x-1][y]=0;
       
    }
    return;
}


int main(){

    int startx,starty;
    scanf("%d%d",&m,&n);
    for(int i = 1;i<=m;i++){
        for(int j = 1;j<=n;j++){
            scanf("%d",&map[i][j]);
        }
    }
    scanf("%d%d%d%d",&startx,&starty,&p,&q);
    v[startx][starty]=1;
    dfs(startx,starty,0);
    printf("%d",mins);


}
/*
5 4
1 1 2 1
1 1 1 1
1 1 2 1 
1 2 1 1
1 1 1 2
1 1 4 3
*/