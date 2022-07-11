#include <stdio.h>

float macas, morangos, peso, total;

int main(){
	
	printf("Escreva a quantidade(em Kg) de macas\n");
	scanf("%f", &macas);
	
	printf("Escreva a quantidade(em Kg) de morangos\n");
	scanf("%f", &morangos);
	
	peso=macas+morangos;
	
	if(peso>0){
		if(peso<=5){
			total = (macas*1.8)+(morangos*2.5);
			printf("Valor a pagar: R$%.2f", total);
		}else if(peso>5 && peso <=8){
			total=(macas*1.50)+(morangos*2.2);
			printf("Valor a pagar: R$%.2f", total);
				}else if(peso>8 || total >25)
			{
			total=(macas*1.50)+(morangos*2.2);
			total=(total*0.9);
			printf("Valor com desconto: R$%.2f", total);
		}		
	}else{
		printf("Dados invalidos: o peso nao pode ser menor que 0!!!");
	}
	
return 0;	
}
