#include<iostream>
#include<string.h>
using namespace std;
 
 
int main(){
      
  string a,b;
  cin>>a>>b;
  if(a.find(b)!=-1){
    cout<<b<<" is substring of "<<a<<endl;
  }else if(b.find(a)!=-1){
    cout<<a<<" is substring of "<<b<<endl;
  }else{
	cout<<"No substring"<<endl;
  }
  return 0; 
}