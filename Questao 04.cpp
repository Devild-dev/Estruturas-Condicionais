#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

int main(){
	float res1, res2, num = 0.0;
	
	printf("Digite um numero:\n");
	scanf("%f", &num);
	
	if(num > 0){
		res1 = pow(num,2);
		res2 = sqrt(num);
		printf("Quadrado do numero = %.2f e Raiz quadrada = %.2f", res1, res2);
	}else{
		printf("Numero negativo, para obter o resultado, por gentileza insira um numero positivo");
	}
	
	getch();
}
