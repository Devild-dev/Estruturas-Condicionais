#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){
	int num[2], i;
	for(i = 0;i < 2;i++){
		printf("Digite o %d numero\n",i+1);	
		scanf("%d", &num[i]);
		setbuf(stdin,NULL);
	}
	if(num[0]>num[1]){
		printf("O maior número digitado foi %d", num[0]);
	}else{
		printf("O maior numero digitado foi %d", num[1]);	
	}
	
	getch();
}
