#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){
	int num1, num2, diferenca;
	num1 = num2 = 0;
	
	printf("Digite o primeiro numero:\n");
	scanf("%d", &num1);
	printf("Digite o segundo numero:\n");
	scanf("%d", &num2);
	
	if(num1>num2){
		diferenca = num1-num2;
		printf("numero maior = %d e diferenca = %d", num1, diferenca);
	}else{
		diferenca = num2-num1;
		printf("numero maior = %d e diferenca = %d", num2, diferenca);
	}
	getch();
}
