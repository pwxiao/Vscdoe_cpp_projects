#include <iostream>
#include <string>
using namespace std;
int main(){
    string str,temp;
    str = "";
    int n;
    cin>>n;
    for(int i = 0;i<n;i++){
        cin>>temp;
        int pos = str.find(temp);
        if( pos == str.npos){
            cout<<temp<<endl;
            str += temp;
        }
    }
    return 0;
}