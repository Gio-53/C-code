#include <stdio.h>

float km, total;

int main(){
       
       printf("Escreva a distancia percorrida: (Em km)\n");
                scanf("%f", &km);
    
	total=4.9+(km*3);
	
	printf("O valor a pagar e de: R$ %.2f", total);
	
	return 0;
	
	
	
	
}
