#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

int main(){
	int num = 0;
	
	printf("Digite um numero:\n");
	scanf("%d", &num);
	
	if(num%2 == 0){
		printf("O numero digitado eh par!!!");
	}else{
		printf("O numero digitado eh impar!!!");
	}
	
	getch();
}
