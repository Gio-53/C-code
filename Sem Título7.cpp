#include<stdio.h>

float qmax, qmin, qatual, media ;



int main (){
	
	printf("Qual o valor em estoque?\n");
	  scanf("%f", &qatual);
	
	printf("Qual o valor maximo do estoque?\n");
	   scanf("%f", &qmax);
	
	printf("Qual o valor minimo do estoque?\n");
	   scanf("%f", &qmin);
	
	media = (qmax+qmin)/2;
	
	if(qatual>=media){
	
	      	printf("Nao efetue a compra de novos produtos!");
	}
	 else{
	 	
	 	printf("Abastece as prateleiras!");
	 	
	 }
	
	
		
	return 0;
}
