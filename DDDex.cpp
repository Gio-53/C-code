#include <stdio.h>

int ddd;

int main (){
	
	printf("Escreva o ddd: \n");
	 scanf("%d", &ddd);
	 
	if(ddd == 11 || ddd == 19 || ddd ==  21 || ddd ==  27 || ddd ==  31 || ddd == 32 ||ddd ==  61 || ddd == 71 ){
	   if(ddd==11){
	   	printf("Sao paulo");
	   }
	   else if(ddd==19){
	   	printf("campinas");	
	     }
		 else if(ddd==21){
	    	printf("Rio de Janeiro");	
        	}
			else if(ddd==27){
	   	printf("Vitoria");	
	}      
	  else if(ddd==31){
	   	printf("Belo Horizonte");	
	}     
	 else if(ddd==32){
	   	printf("Juiz de Fora");	
	}     
	   else if(ddd==61){
	   	printf("Brasilia");	
	}       
	    else if(ddd==71){
	   	printf("Salvador");	
	}		
      }else{
    		printf("O DDD digitado e invalido ou nao esta em nossa base de dados!");
		}	
	
	return 0;
}
