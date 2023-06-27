#include <iostream>
#include <sstream>
#include <algorithm>

using namespace std;

string int_str(int n){
    string a;
    stringstream convent;
    convent<<n;
    convent>>a;
    return a;
}

int main(){
    int i = 1;
    int couts = 0;

    while(1){
        string str = int_str(i);
        couts+= count(str.begin(),str.end(),'1');
        if(couts>=2021){
            break;
        }
        i+=1;
    }
    printf("%d",i);
    cout<<i<<endl;
    return 0;
}
