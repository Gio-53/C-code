#include <stdio.h>

float exc, multa, peso;



int main (){
	
   printf("Escreva o peso dos peixes\n");
     scanf("%f", &peso);
     
     printf("\nVoce pescou %.2f kg\n", peso);

     
     if(peso>50){
	   exc=peso-50;
	      multa=exc*4.00;
 printf("\nVoce excedeu %.2f Kg\n", exc);	
printf("\nVoce vai pagar R$ %.2f de multa\n", multa);	
     }
          
	return 0;
	
}
