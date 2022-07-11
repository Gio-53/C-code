#include <stdio.h>
//senha 4531

int senha;

int main(){
	
	printf("Digite sua senha de 4 digitos:\n");
	 scanf("%d", &senha);
	 
	 if(senha==4531){
	printf("Acesso autorizado!");
	
	 }else{
	 	printf("Acesso negado!");
	 }
	
	return 0;
	
}
