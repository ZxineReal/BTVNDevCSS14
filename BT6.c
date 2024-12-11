#include<stdio.h>

int main(){
	char text[100];
	gets(text);
	int length=strlen(text);
	int count=0;
	
	for(int i=0;i<length;i++){
		if(text[i]>='a'&&text[i]<='z'){
			count++;
		}
	}
	printf("So ki tu trong chuoi la: %d",count);
}