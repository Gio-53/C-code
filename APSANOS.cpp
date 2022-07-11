#include<stdio.h>

int ent, anos, meses, dias;

int main(){

printf("Digite a idade em dias:\n");
 scanf("%d", &ent);
 
anos=ent/365; 
meses=(ent%365)/30;
dias=((ent%365)%30);

printf("Sua idade e de %d anos, %d meses e %d dias!",anos, meses, dias);
 
	return 0;	
}
