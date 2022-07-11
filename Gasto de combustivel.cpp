#include <stdio.h>

int kmh, tempo;
float distancia, gasto;
//O carro utilizado nessa medição tem o consumo de 12 km/l**
int main(){
	
	printf("Escreva o tempo de viagem: (Em horas)\n");
	 scanf("%d", &tempo);
	
	printf("Escreva a velocidade media: (Em km/h)\n");
	 scanf("%d", &kmh);
	
  distancia=(kmh/tempo);
  
  gasto= (distancia/12);
  
  printf("O gasto de combustivel foi de %.4f litros", gasto);
  
  return 0;
}
