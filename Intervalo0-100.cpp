#include <stdio.h>

float n;


int main(){
	
	printf("insira um numero entre 0 e 100:\n");
	scanf("%f", &n);
	
	if(n>=0 && n <=100){
		if(n>=0 && n <=25){
			printf("\nIntervalo (0,25]");
		}else if(n>25 && n <=50){
			printf("\nIntervalo (25,50]");
		}else if(n>50 && n <=75){
			printf("\nIntervalo (50,75]");
		}else if(n>75 && n <=100){
			printf("\nIntervalo (75,100]");
		}
	}
	else{
		printf("\nFora de intervalo!");
	}
	
	return 0;
	
	
}
