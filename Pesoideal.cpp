#include <stdio.h>
#include<conio.h>

char sex, nome, masculino, feminino;
int altura;
float pideal, pideal2;

int main(){
	
	printf("Qual seu nome? \nR:");
	  scanf("%c", &nome);	
	
    printf("Voce e do sexo masculino ou feminino? \nR:");
     scanf("%c", &sex);	
	 
	 printf("\nEscreva sua altura: (Em cm) \nR:");
	 scanf("%d", &altura);
	 
	 if(sex==masculino){
	 	
	 pideal=(72.7 *altura)-58;
	 
	 printf("Ola %c, seu peso ideal e de %f kg, até logo!",nome, pideal);
		 	
	 }
	 else{  
	 
	 pideal=(62.1 *altura)-44.7;

	 printf("Ola %c, seu peso ideal e de %f, até logo!",nome, pideal);
	 
	 }
	 
	return 0;
	
}
