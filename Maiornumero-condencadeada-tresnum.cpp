#include <stdio.h>

int n1, n2, n3;

int main(){
	
	printf("Por favor digite tres numeros diferentes:\n");
	   scanf("%d%d%d", &n1, &n2, &n3);
	 	   
	   if(n1!=n2 && n2 != n3){
	   if(n1>n2 && n2>n3){
	   	printf("A ordem decrescente e: %d,%d e %d",n1, n2, n3);
		   }	else if(n1>n3 && n3>n2){
	   	printf("A ordem decrescente e: %d,%d e %d",n1, n3, n2);	
	   }else if(n2>n1 && n1 >n3){
	   	printf("A ordem decrescente e: %d,%d e %d",n2, n1, n3);
	   }else if(n2>n3 && n3>n1){
	   	    printf("A ordem decrescente e: %d,%d e %d",n2, n3, n1);
			   }else if(n3>n2 && n2>n1){
	   	    	printf("A ordem decrescente e: %d,%d e %d",n3, n2, n1);
			   }else if(n3>n1 && n1>n2){
			   	printf("A ordem decrescente e: %d,%d e %d",n3, n1, n2);
			   }
	   }else{
	   	printf("Dados invalidos, os numeros devem ser diferentes!");
	   }
	
	return 0;
	
}
