#include <stdio.h>
#include <math.h>

float n;

int main(){
	
	printf("Escreva um numero\n");
	 scanf("%f", &n);
	

if(n>=0) {
    printf("\nO numero %.0f e positivo \n",n);
	}
	
	else{
		printf("\nO numero %.0f e negativo",n);
		}

return 0;
}
