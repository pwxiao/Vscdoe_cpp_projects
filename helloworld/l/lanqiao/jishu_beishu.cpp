#include <iostream>
#include <string>
using namespace std;
int judge(int n)
{
  string str = to_string(n);
  if (str.find_first_of("02468")!=string::npos)
  {
    return 0;
  }
  return 1;
}
int main()
{
  long long n = 2019;
  while (1)
  {
    if(judge(n)){
      cout<<n;
      break;
    }
    n += 2019;
  }
  return 0;
}