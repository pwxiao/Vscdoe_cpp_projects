#include <iostream>
using namespace std;
int main(){
    int n;
    while(n--){
        stack<char>s;
        getline(cin,s);
        for(int i = 0;i<s.size();i++){
            int k = 0;
            if(s[i]==' '){
               while(!s.empty()){
                printf("%c",s.top());
                s.pop();
               }
                k = i+1;
            }
            if(){
                for(int q = s.size()-1;q>=s.size()-k-1;q--){
                    printf("%c",s[q]);
                }
        }
          if(s[i]=="\n") break;
        }
      
    }
    return 0;
}