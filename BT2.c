#include<stdio.h>

int main(){
	char text[100]={"Xin chao rikkei"};
	int length=strlen(text);
	
	for(int i=0;i<length;i++){
		printf("%c ",text[i]);
	}
	return 0;
}