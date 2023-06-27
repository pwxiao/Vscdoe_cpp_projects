#include <bits/stdc++.h>
#include <string>
using namespace std;
int main(){
    string m = "ABCDEFGHIJKLMNOPQRSTUVWXYZ ";
    string n[] = {"1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25","26","#"};
    int l;
    scanf("%d",&l);
    while(l--){
        string input;
        getline(cin,input);
        for(int i = 0;i<input.length();i++){
            for(int j = 0;j<n.size();j++){
                if(input[i] ==  n[j] ){
                    printf("%c",m[j]);
                }
            }
            
        }
        printf("\n");
    }
    return 0;
}