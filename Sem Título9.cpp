#include <stdio.h>

float vcom, vtotal;

//até 100 desconto de 5%, acima de 101 desconto de 10%

int main (){
	
printf("Insira o valor da compra\n");
 scanf ("%f", &vcom);
   
 if(vcom>0) {
 	
  if(vcom<=100){
     vtotal=vcom-(vcom*0.05);
   	   }
	 else{
	 vtotal=vcom-(vcom*0.10);	
	 		 }
 printf("\nValor a pagar: R$ %.2f\n", vtotal);
 }  
   else{
   	printf("Valor invalido");
   }

        return 0;
}
