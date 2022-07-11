#include <stdio.h>

int n;

int main(){
	printf("Digite um numero: \n");
	 scanf("%d",&n);
	 
	 switch(n){
	 	case -10 ... 0:
	 		printf("\nO numero esta contido no intervalo entre -10 e 0!\n");
	 	 break;
	 	case 1 ... 11:
	 		printf("\nO numero esta contido no intervalo entre 1 e 11!\n");
	 	break;
	 	case 12 ... 24:
	 		printf("\nO numero esta contido no intervalo entre 12 e 24!\n");
	 	break;
	 	case 25:
	 		printf("\nO numero e igual a 25!\n");
	 		break;
	 	default:
	 		printf("O numero digitado e invalido!!!");
	 }
	
	return 0;
	
	
}
