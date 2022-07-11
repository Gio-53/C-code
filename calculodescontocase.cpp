#include <stdio.h>

float valor;
int pag;

int main(){
  printf("Digite o valor da compra: \n");
    scanf("%f", &valor);
    
    printf("Digite 1 para pagamento A vista e 2 para pagamento parcelado.\n");
    scanf("%d", &pag);
    
	if (valor>0){
       switch(pag){
       	case 1 : 
		   printf("O valor da compra e de %.2f ", valor*0.9);
	 break;
	   case 2 :
	   	printf("O valor da compra e de %.2f", valor);
	 break;
	   default: printf("Foi digitada uma opcao invalida!");
	}
	}else{
    	printf("O valor digitado e menor que 0!");
	}
  return 0;
}
