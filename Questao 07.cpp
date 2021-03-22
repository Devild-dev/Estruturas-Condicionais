#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){
	int num1, num2;
	num1 = num2 = 0;
	
	printf("Digite o primeiro numero:\n");
	scanf("%d", &num1);
	printf("Digite o segundo numero:\n");
	scanf("%d", &num2);
	
	if(num1>num2){
		printf("Numero maior = %d", num1);
	}else if(num2>num1){
		printf("Numero maior = %d", num2);
		
	}else{
		printf("Numeros Iguais!");
	}
	

	getch();
}
