#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

int main(){
	float quadrado, raiz_quadrada, num;
	quadrado = raiz_quadrada = num = 0.0;
	printf("Digite um numero:\n");
	scanf("%f", &num);	
	
	if(num>0){
		raiz_quadrada = sqrt(num);
		printf("%.2f", raiz_quadrada);
	}else{
		quadrado = pow(num,2);
		printf("%.2f", quadrado);
	}
	
	
	getch();
}
