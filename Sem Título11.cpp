#include <stdio.h> 

float idade, tempotrabalho;

int main(){
	
	printf("Digite sua idade:\n");
	 scanf("%f", &idade);
	 
	 printf("Digite o tempo de serviço:\n");
	 scanf("%f", &tempotrabalho);
	 
	 if(idade>=65 || tempotrabalho>= 30 || (idade>=60 && tempotrabalho>=25)){
	 	
	 	printf("Que bom, voce pode se aposentar! :)");
	 }
	 else	 {
	 	printf("Ainda nao e possivel se aposentar.");
	 }
	
	return 0;	
	
	
}
