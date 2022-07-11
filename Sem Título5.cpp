#include<stdio.h>

float n1, n2, media;

int main(){
	
	printf("Escreva a primeira nota\n");
      scanf("%f", &n1);
      
     printf("Escreva a segunda nota\n");
	scanf("%f", &n2);
	
	media = (n1+n2)/(2);
	 ("%f", &media);
	
	if(media>=6){
		printf("Aprovado! Sua nota final e %.2f", media);
			}
			else {
				printf("Reprovado! Sua nota final e %.2f", media);
			}
			
			
		return 0;
	
	
}

