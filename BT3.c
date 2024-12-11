#include<stdio.h>

int main(){
	char text[100]={"Xin chao rikkei"};
	int length=strlen(text);
	
	for(int i=length;i>=0;i--){
		printf("%c ",text[i]);
	}
	return 0;
}