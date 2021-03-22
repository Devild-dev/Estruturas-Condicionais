#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

int main(){
	float num = 0.0, raizquadrada = 0.0;
	
	printf("Digite um numero:\n");
	scanf("%f", &num);
	
	if(num > 0.0){
		raizquadrada = sqrt(num);
		printf("%.2f\n", raizquadrada);
	}else{
		printf("Numero inválido:\n");
	}
	getch();
}
