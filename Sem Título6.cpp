#include<stdio.h>

int quant;
float valor;

int main (){
	
	printf("\n Quantas macas voce comprou?\n");
	  scanf("%d", &quant);
	  
	  if(quant>=12){	  	
	  	valor = (quant*(1));
	  	 printf("\nVoce vai pagar R$ %.2f",valor);
	  }
	else{
		  valor=(quant*1.3);
	  printf("\nVoce vai pagar r$ %.2f",valor);}
	
	
	
	return 0;
	
}
