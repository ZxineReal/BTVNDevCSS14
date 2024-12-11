#include<stdio.h>

int main(){
	char text[100];
	printf("Moi ban nhap vao mot chuoi: \n");
	gets(text);
	int length=strlen(text);
	printf("Chuoi ban vua nhap la: %s\n",text);
	printf("Do dai chuoi ban vua nhap la: %d",length);
	
	return 0;

}