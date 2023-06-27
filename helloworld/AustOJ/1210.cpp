
#include <stdio.h>
using namespace std;

int main(){
	char string[100],c;  
	int i,num=0,word=0;
	gets(string);  
	for(i=0;(c=string[i])!='\0';i++){  
		if(c==' ') word=0;  
		else if(word==0){  
			word=1;   
			num++;   
		}			
	}
	printf("%d", num);
	return 0;
} 
