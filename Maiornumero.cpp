#include <stdio.h>

int n1, n2;

//r dois números (considere que não serão lidos valores iguais) e escreva o maior deles.

int main(){
	
	printf("escreva um numero: ");
	 scanf("%d", &n1);
	
	
		printf("escreva outro numero: ");
	 scanf("%d", &n2);
	
	
	if(n1>n2){
		
		printf("O maior numero e: %d", n1);	
	}	
	else{
			printf("O maior numero e: %d ", n2);	
	}

 return 0;
	
	
}
