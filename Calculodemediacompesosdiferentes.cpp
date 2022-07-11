//media de notas com pesos diferentes
#include <stdio.h>
float n1, n2, n3, media;

int main(){
	
	printf("Escreva a primeira nota\n");
	scanf("%f", &n1);
	
		printf("Escreva a segunda nota\n");
	scanf("%f", &n2);
	
		printf("Escreva a terceira nota\n");
	scanf("%f", &n3);
	
	media=(n1*0.2)+ (n2*0.3) + (n3*0.5)/3;
	
	printf("Sua media e de %.2f", media);
	
   return 0;	
	
}
