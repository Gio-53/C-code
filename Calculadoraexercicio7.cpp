#include <stdio.h>
#include <math.h>

//a) o produto do dobro do primeiro com metade do segundo
//b) a soma do triplo do primeiro com o terceiro.
//c) o terceiro elevado ao cubo

int n1,n2;
float n3, a, b, c;

int main(){
	
	printf("Escreva um numero inteiro\n");
	 scanf("%d", &n1);
	
		printf("Escreva outro numero inteiro\n");
	 scanf("%d", &n2);
	
		printf("Escreva um numero real\n");
	 scanf("%f", &n3);
	
	a=(n1*2)*(n2/2);
	b=(n1*3)+(n3);
	c=pow (n3,3);
	
	printf("\nO produto do dobro do primeiro com metade do segundo e: %.2f\n",a);
	
	printf("\nA soma do triplo do primeiro com o terceiro e: %.2f\n",b);
	
     printf("\nO terceiro elevado ao cubo e: %.2f\n",c);

	return 0;
	}

