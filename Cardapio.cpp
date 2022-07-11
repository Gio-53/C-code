#include <stdio.h>
//ITEM 1 - Cachorro-quente - 4.00
//ITEM 2 - X-salada        - 4.50
//ITEM 3 - X-bacon         - 5.00
//ITEM 4 - Torrada simples - 2.00
//ITEM 5 - Refrigerante    - 1.50

int item, quant;
float total;

int main(){
	
	printf("Por favor digite o codigo do item do cardapio e a quantidade:\n");
	   scanf("%d%d", &item, &quant);
	 	   
	   if(item>=1 && item<=5 && quant >=0){
	   	if(item==1){
	   		total=quant*4;
	   		printf("\nTotal: R$ %.2f ", total);
		   }else if(item==2){
	   		total=quant*4.5;
	   		printf("\nTotal: R$ %.2f ", total);
	   		}else if(item==3){
	   		total=quant*5;
	   		printf("\nTotal: R$ %.2f ", total);
	   		}else if(item==4){
	   		total=quant*2;
	   		printf("\nTotal: R$ %.2f ", total);
	   	  } else if(item==5){
	   		total=quant*1.5;
	   		printf("\nTotal: R$ %.2f ", total);
	   }
	   	
	   }else{
	   	printf("Dados invalidos!");
	   }
	
	return 0;
	
}
