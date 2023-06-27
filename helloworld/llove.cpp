#include<cstdio>
#include<iostream>
#include<cstring>
#include<cstdlib>
#include<algorithm>
#include<string>
#include<vector>
#define REP(i,n) for(int i=0;i<n;++i)
#define CLR(x,c) memset(x,c,sizeof x)
using namespace std;

typedef long long int64;

void setIO(string a){
	string in=a+".in",out=a+".out";
	freopen(in.c_str(),"r",stdin);
	freopen(out.c_str(),"w",stdout);
}

const int MAX_N=int(1e5)+10;
int n,m,nQ;
int V[MAX_N],W[MAX_N],C[MAX_N];

vector<int> E[MAX_N];


void readInput(){
	cin>>n>>m>>nQ;
	REP(i,m)scanf("%d",V+i);
	REP(i,n)scanf("%d",W+i);
	
	REP(i,n-1){
		int a,b;
		scanf("%d%d",&a,&b);
		--a,--b;
		E[a].push_back(b);
		E[b].push_back(a);
	}
	
	REP(i,n)scanf("%d",C+i),--C[i];
}

//no modify only >_<

int cnt[MAX_N];

int fa[MAX_N];
int stack[MAX_N],top=0;
int ord[MAX_N],at[MAX_N],pt=0;

void dfs(int rt){
	stack[top++]=rt;
	fa[rt]=-1;
	
	while(top>0){
		int u=stack[--top];
		ord[pt]=u;
		at[u]=pt++;
		for(vector<int>::iterator e=E[u].begin();e!=E[u].end();++e)
			if(*e!=fa[u]){
				fa[*e]=u;
				stack[top++]=*e;
			}
	}
}

struct LCT{
	int fa[MAX_N];
	void makeRoot(int u){
		if(fa[u]==-1)
			return;
		int f=fa[u];
		makeRoot(f);
		fa[f]=u;
		fa[u]=-1;
	}
	
	void init(){
		REP(i,n)fa[i]=::fa[i];
	}
};

LCT UL,VL;

struct Query{
	int id;
	int u,v;//by order
	void read(int id){
		this->id=id;
		scanf("%d%d",&u,&v);
		--u,--v;
		u=at[u],v=at[v];
		if(u>v)swap(u,v);
	}
	
	bool operator<(const Query&o)const{
		return v<o.v;
	}
};

const int MAX_SQRT=400;

vector<Query> by[MAX_SQRT];

int64 ans[MAX_N];

int sq;

int64 cur;

bool mark[MAX_N];

void addIt(int u){
	mark[u]=true;
	int w=C[u];
	int c=cnt[w]++;
	cur+=1LL*V[w]*W[c];
}

void delIt(int u){
	mark[u]=false;
	int w=C[u];
	int c=--cnt[w];
	cur-=1LL*V[w]*W[c];
}

void moveTo(int u,int v,int nu,LCT&L){
	//(u,v) -> (nu,v)
	L.makeRoot(v);
	
	while(!mark[nu]){
		addIt(nu);
		nu=L.fa[nu];
	}
	
	//now nu is lca
	while(u!=nu){
		delIt(u);
		u=L.fa[u];
	}
}

void work(){

	dfs(0);
	
	sq=1;while(sq*sq<=n)++sq;
	
	REP(i,nQ){
		Query q;
		int t;
		scanf("%d",&t);
		
		q.read(i);
		
		by[q.u/sq].push_back(q);
	}
	
	int u=0,v=0;
	CLR(mark,0);
	CLR(cnt,0);
	UL.init(),VL.init();
	addIt(0);
	//cerr<<cur<<endl;
	
	REP(it,sq){
		vector<Query>&qs=by[it];
		if(qs.empty())
			continue;
		sort(qs.begin(),qs.end());
		
		REP(j,qs.size()){
			Query&q=qs[j];
			
			
			int nu=ord[q.u],nv=ord[q.v];
			//cerr<<u<<","<<v<<"->"<<nu<<","<<nv<<endl;
			//u,v -> nu,v
			moveTo(u,v,nu,VL);
			u=nu;
			//v,u -> nv,u
			moveTo(v,u,nv,UL);
			v=nv;
			
			//cerr<<cur<<endl;
			
			ans[q.id]=cur;
		}		
	}
	
	REP(i,nQ)
		cout<<ans[i]<<endl;
}

namespace BF{

	int fa[MAX_N],que[MAX_N],qh,qt;

	void bfs(int rt){
		fa[rt]=-1;
		qh=qt=0;
		que[qt++]=rt;
	
		while(qh<qt){
			int u=que[qh++];
			for(vector<int>::iterator e=E[u].begin();e!=E[u].end();++e)
				if(*e!=fa[u]){
					fa[*e]=u;
					que[qt++]=*e;
				}
		}
	}

	struct LCT{
		int fa[MAX_N];
		void makeRoot(int u){
			if(fa[u]==-1)
				return;
			int f=fa[u];
			makeRoot(f);
			fa[f]=u;
			fa[u]=-1;
		}
	
		void init(){
			REP(i,n)fa[i]=BF::fa[i];
		}
	};
	
	LCT L;
	
	int cnt[MAX_N];

	int64 calc(int u,int v){
		memset(cnt,0,sizeof(int)*m);
	
		int64 ans=0;
	
		L.makeRoot(u);
	
		while(v!=-1){
			int c=cnt[C[v]]++;
			ans+=1LL*W[c]*V[C[v]];
			v=L.fa[v];
		}
		//cerr<<endl;
	
		return ans;
	}

	void answerQueries(){
		bfs(0);
		L.init();
	
		REP(i,nQ){
			int t,x,y;
			scanf("%d%d%d",&t,&x,&y);
			if(t==0){
				--x,--y;
				C[x]=y;
			} else {
				--x,--y;
				cout<<calc(x,y)<<endl;
			}
		}
	}

	void work(){
		answerQueries();
	}
}


int main(){
	setIO("park");
	readInput();
	if(n<=10000){//brute force QAQ >w<
		BF::work();
	} else {
		work();
	}
	
	return 0;
}
