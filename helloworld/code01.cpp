#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;


int isPrime(int n){
  if(n<2) return 0;
  for(int i = 2;i<n;i++){
    if(n%i==0){
      return 0;
      break;
    }
  }
  return 1;
}

double work() {
    double sum = 0.0;
    double term = 1.0;
    int sign = 1;
    while (fabs(term) >= 1e-6) {
        sum += sign * term;
        sign = -sign;
        term = (double) (2 * (int) (sum + 1) - 1);
    }
    return sum;
}
double work() {
    double sum = 0;
    double item = 1;
    int sign = 1;
    int i = 1;
    while (fabs(item) >= 1e-6) {
        sum += sign * item;
        sign = -sign;
        i++;
        item = 1.0 / i;
    }
    return sum;
}

bool cmp(int a,int b){
  return a>b;
}
int main(){
cout<<isPrime(1);
cout<<isPrime(2);
cout<<isPrime(9);
cout<<isPrime(13);
  return 0;
}

