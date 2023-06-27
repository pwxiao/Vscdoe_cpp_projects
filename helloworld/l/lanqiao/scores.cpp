#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  int n;
  int a =0,b=0;
  float resa,resb;
  cin>>n;
  int score[n];
  for(int i = 0;i<n;i++){
    cin>>score[i];
  }
  for(int i = 0;i<n;i++){
    if(score[i]>=60){
      a++;
    }
    if(score[i]>=85){
      b++;
    }
  }
  resa = 1.0*a/n;
  resb = 1.0*b/n;
  cout<<fixed<<setprecision(0)<<100*resa<<"%"<<endl;
  cout<<fixed<<setprecision(0)<<100*resb<<"%";
  return 0;
}