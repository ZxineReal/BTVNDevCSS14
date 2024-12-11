#include<stdio.h>

int main(){
	char text[100];
	gets(text);
	int length=strlen(text);
	int count=1;
	
	for(int i=0;i<length;i++){
		if(text[i]==' '){
			count++;
		}
	}
	printf("So tu trong chuoi la: %d",count);
}