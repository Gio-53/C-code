#include <stdio.h>
#include <ctype.h>
char letra;

int main(){
  printf("Digite uma letra minuscula: \n");
    scanf(" %c", &letra);
    letra=tolower(letra);//transforma letra em minusculo
    if(isalpha(letra)){//localiza a letra no alfabeto
    	switch(letra){
    		case 'a':
    		case 'e':
    		case 'i':
    		case 'o':
    		case 'u':
    			printf("\nA letra digitada (%c) e uma vogal!", letra);
    			break;
    		default:
    			printf("\nA letra digitada (%c) e uma consoante!", letra);   		
		}
    	
	}else{
		printf("Voce precisa digitar uma LETRA!!!");
	}
  
  return 0;
}
