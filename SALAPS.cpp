#include <stdio.h>
#include <locale.h>
float sal, aumento, novo;

int main(){
	setlocale(LC_ALL,"");
	
	printf("Digite seu salário: \n");
	 scanf("%f",&sal);

if(sal>0){
    if(sal<=400.00){
    	aumento=sal*0.15;
	 	novo=sal+aumento;
	 	printf("Seu novo salário será de %.2fR$, você recebeu um aumento de %.2fR$, seu salário foi aumentado em 15 por cento", novo, aumento);
	}else if(sal>=400.01 && sal<=800.00){
		aumento=sal*0.12;
	 	novo=sal+aumento;
	 	printf("Seu novo salário será de %.2fR$, você recebeu um aumento de %.2fR$, seu salário foi aumentado em 12 por cento", novo, aumento);
	}else if(sal>=800.01 && sal<=1200.00){
	    aumento=sal*0.10;
	 	novo=sal+aumento;
	 	printf("Seu novo salário será de %.2fR$, você recebeu um aumento de %.2fR$, seu salário foi aumentado em 10 por cento", novo, aumento);
    }else if(sal>=1200.01 && sal<=2000){
     aumento=sal*0.07;
	 	novo=sal+aumento;
	 	printf("Seu novo salário será de %.2fR$, você recebeu um aumento de %.2fR$, seu salário foi aumentado em 7 por cento", novo, aumento);	
		}else{
		 aumento=sal*0.04;
	 	novo=sal+aumento;
	 	printf("Seu novo salário será de %.2fR$, você recebeu um aumento de %.2fR$, seu salário foi aumentado em 4 por cento", novo, aumento);
		}
	 	
}else{
 printf("O valor do salário precisa ser maior que 0!");	
}
	return 0;
	
}
