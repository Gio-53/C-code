#include <stdio.h>
#include <math.h>
#include <locale.h>

float a, b, c, x1, x2, delta;

int main(){
	setlocale(LC_ALL,"");
	
	printf("Insira o valor de a: ('a' não pode valer 0!)\n");
	scanf("%f",&a);
	
	printf("Insira o valor de b: \n");
	scanf("%f",&b);
	
	printf("Insira o valor de c: \n");
	scanf("%f",&c);
	
	delta=((b*b) - (4*(a*c)));
	x1=(-b+sqrt(delta))/(2*a);
	x2=(-b-sqrt(delta))/(2*a);
	
if(a!=0){
    if(delta<0){
      printf("As raizes dessa equação são x1=0 e x2=0");
     	}
	  else if(delta==0){
  		  	 printf("As raizes dessa equação são x1=%.f e x2=0", x1);	
	  }
	  else if(delta>0){	
		printf("As raizes dessa equação são x1=%.0f e x2=%.0f", x1, x2);}
	}else{
		printf("O valor de 'a' não pode ser igual a 0!");
	}
	return 0;
}
