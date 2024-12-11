#include<stdio.h>

int main(){
	char text[100]={"Xin chao rikkei\n"};
	printf("%s",text);
	int length=strlen(text);
	int count=0;
	char item;
	printf("Moi ban nhap vao mot ki tu: \n");
	scanf("%c",&item);
	
	
	for(int i=0;i<length;i++){
		if(item==text[i]){
			count++;
		}
	}
	printf("So lan xuat hien cua %c trong chuoi la: %d",item,count);
}