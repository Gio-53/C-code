#include <stdio.h>

float n1, n2, media;

int main(){
	
	printf("Insira as duas notas\n");
	scanf("%f%f",&n1,&n2);
	
 if(n1>=0 && n1 <=10 && n2>=0 && n2<=10){
	media=(n1+n2)/2;	
	 if(media>=7){
	 printf("\nAprovado, sua nota final e: %.2f", media);
		}else if(media>=3 && media<7){
		printf("Recuperacao, sua nota final e: %.2f", media);
		  }
		  else 
		  {
		printf("\nReprovado, nota final: %.2f", media);
		}
			}
 else
		{
		printf("\nDados invalidos!");
	}
	
	return 0;
}
