#include <stdio.h>

float n1, n2;
char op;

int main(){
	
	printf("Digite um numero: \n");
	 scanf("%f",&n1);
	 
	 printf("Digite o operador: + - * /\n");
	 scanf(" %c",&op);

	printf("Digite outro numero: \n");
	 scanf("%f",&n2);
	 
	 switch(op){
	 	case '+':
	 		printf("\nO resultado da soma e %.2f\n", n1+n2);
	 		break;
	 		case '-':
	 			printf("\nO resultado da subtracao e %.2f\n", n1-n2);
	 			break;
	 		 case '*':
	 		printf("\nO resultado da multiplicacao e %.2f\n", n1*n2);
	 			break;
	 		  case '/':
	 		  	if(n2!=0){
	 		printf("\nO resultado da divisao e %.2f\n", n1/n2);
               }
			   else{
               	printf("\nO numero nao pode ser dividido por 0 :(");
			   }

	 			break;
                  default:
                  	printf("Operador invalido!");
}
	return 0;
	
}
