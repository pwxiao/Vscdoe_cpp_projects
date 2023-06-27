#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    char ch;
    scanf("%d",&n);
    while(n--){
        stack<char>s;
        while(true){
            ch = getchar();
            if(ch == ' '){
                while(!s.empty()){
                    printf("%c",s.top());
                    s.pop();
                }
            }
            else{
                s.push(ch);
        }
        printf("\n");
    }
    return 0;
}
}