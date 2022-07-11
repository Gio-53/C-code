#include <stdio.h>


float F,C;

int main(){
	
	printf("Escreva a temperatura em Fahrenheit\n");
	 scanf("%f", &F);
	 
	 C=((F-32)*5)/9;
	 
	 printf("A temperatura em Celius e de %.2f", C);

	
	return 0;
}
