#include <stdio.h>

int n1, n2;

int main(){
	
	printf("Por favor digite dois numeros diferentes:\n");
	   scanf("%d%d", &n1, &n2);
	 	   
	   if(n1!=n2){
	   if(n1>n2){
	   	printf("O maior numero e: %d",n1);
	   }else if(n2>n1){
	   	printf("O maior numero e: %d",n2);
	   }
	   }else{
	   	printf("Dados invalidos, os numeros devem ser diferentes!");
	   }
	
	return 0;
	
}
