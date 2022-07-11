#include <stdio.h>
//descobrir se o triângulo é equilatero, isosceles ou escaleno.
float a,b,c;

int main(){
	

    printf("Digite os lados do triangulo:");
	 scanf("%f%f%f",&a,&b,&c);
	  
	 if(a+b>c && b+c>a && a+c>b){
	  if(a==b&&b==c){
	  	
	  	printf("\nTriangulo equilatero\n");
	  		
	     }
	      else if(a==b||b==c||a==c)
		  {
	      	printf("\nTriangulo isosceles\n");
		  }
	  else{
	  	printf("\nTriangulo escaleno\n");
	  }
	  	  
	  }else{
	  		  	printf("Isso nao e um triangulo!");
	  }
	  
	  
	  return 0;
	  
	
	
	
}
