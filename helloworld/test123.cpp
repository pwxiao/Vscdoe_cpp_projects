#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;
const int INF = 666666;
int main(){
	int n,p;
	int code[1001],codes[1001];
	scanf("%d %d",&n,&p);
	for(int i = 0;i<n;i++){
		scanf("%d",&code[i]);
	}

	while(p--){
		int a,b;
		int ans = INF;
		int flag[1001];
		memset(flag,0,sizeof(flag));
		memcpy(codes,code,sizeof(code));
		cin>>a>>b;
		while(b!=0){
			for(int i = 0;i<n;i++){
				if(b%10 != codes[i]%10){
					flag[i] = 1;
				}
				codes[i]/=10;
			}
			b/=10;
		}
		for(int i = 0;i<n;i++){
			if(!flag[i] && code[i]<ans)
				ans = code[i];
		}
		if(ans!=INF){
			cout<<ans<<"\n";
		}else{
			cout<<"-1\n";
		}
		
	}
	return 0;
}