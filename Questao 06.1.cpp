#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

int main(){
	int num1, num2, intervalo;
	num1 = num2, intervalo = 0;
	
	printf("Digite o primeiro numero:\n");
	scanf("%d", &num1);
	printf("Digite o segundo numero:\n");
	scanf("%d", &num2);
	
	if(num1 > num2){
		intervalo = num1 - num2;
		printf("O maior numero eh %d e a diferenca entre eles eh %d", num1, intervalo);
	}else{
		intervalo = num2 - num1;
		printf("O maior numero eh %d e a diferenca entre eles eh %d", num2, intervalo);
	}
	
	getch();
}
