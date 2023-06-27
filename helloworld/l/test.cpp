#include <iostream>
#include <stack>
#include <string>
#include <math.h>

using namespace std;
void to(int n){
	stack<int> str;
	while(n!=0){
		int res = n%16;
		str.push(res);
		n /=16;
	}
	while (!str.empty())
	{		
		cout<<str.top();
		str.pop();
	}
	
}

int toHex(int n);
int main(){
	int n;
	//cout<<toHex(51);
	to(16);
	return 0;
}
int toHex(int n){
	int result = 0,counter = 0;
	while(n!=0){
		result += n%10 * pow(16,counter);
		n/=10;
		counter++;
	}
	return result;
}
