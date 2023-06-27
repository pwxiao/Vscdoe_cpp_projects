#include <iostream>
using namespace std;
int main(){
	int n,circle,s = 0;
	cin>>n;
	int a[n][n]={0};
	circle=n%2?n/2+1:n/2;
	for(int i =0;i<circle;i++){
		for(int i = 0+s;i<n-s;i++){
			for(int j = 0+s;j<n-s;j++){
				a[i][j] = s;
			}
		}
		s++;
	}

	for(int i = 0;i<n;i++){
		for(int j = 0;j<n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	// cout<<circle;
}
