#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){
	float nota1, nota2, media;
	nota1 = nota2 = media = 0.0;
	
	printf("Digite a primeira nota:\n");
	scanf("%f", &nota1);
	printf("Digite a segunda nota:\n");
	scanf("%f", &nota2);
	
	if(nota1 < 0.0 || nota1 > 10.0 || nota2 < 0.0 || nota2 > 10.0){
		printf("Nota Invalida!");
	}else{
		media = (nota1+nota2)/2;
		printf("Media do aluno = %.2f", media);
	}
	
	getch();
}
