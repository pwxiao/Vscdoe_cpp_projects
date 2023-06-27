#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;
const int INF = 10000000;
int main(){
	int n,p;
	int code[1001],codes[1001];
	scanf("%d %d",&n,&p);
	for(int i = 0;i<n;i++){
		scanf("%d",&code[i]);
	}

	while(p--){
		int a,b,c;
		vector<int> s;
		
		int flag;
		memcpy(codes,code,sizeof(code));
		scanf("%d %d",&a,&b);
		for(int i = 0;i<n;i++){
			c = b;
			flag = 0;
			while(c!=0){
				if(c%10 != codes[i]%10)
					flag = 1;
				c/=10;
				codes[i]/=10;
			}

		
		if(!flag){
			s.push_back(code[i]);
		}
		else{
			s.push_back(INF);
		}

		}
		sort(s.begin(),s.end());
		if(s[0]!=INF)
			cout<<s[0]<<endl;
		else
			cout<<-1<<endl;
		s.clear();

	}
	return 0;
}