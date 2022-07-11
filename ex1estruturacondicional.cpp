//Faça um programa para introduzir 2 números e fazer a soma destes 2 números. Se a soma for maior que
//10, calcular o dobro deste valor. Caso a soma destes 2 números for menor que 10, calcular o triplo desta
//soma.

#include <stdio.h>

int n1, n2, soma;

int main(){
	
		printf("Escreva um numero: \n");
	 scanf("%d", &n1);
	
		printf("Escreva outro numero: \n");
	 scanf("%d", &n2);
	 
	 soma=n1+n2;
	 
	 if(soma>10)
	 {
 		 	printf("O dobro da soma e: %d ", (soma*2));
	 }
	 else{
	 	
	 		printf("O triplo da soma e: %d ", (soma*3));
	 }
	 
	return 0;	
	
	
}
