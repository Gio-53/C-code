#include <stdio.h>
#include <math.h>

float n;

int main(){
	
	printf("Escreva um numero\n");
	 scanf("%f", &n);
	

if(n>10) {
    printf("\nO numero %.0f e maior que 10 \n",n);
	}
	
	else{
		printf("\nO numero %.0f e menor que 10",n);
		}

return 0;
}
