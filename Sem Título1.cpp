#include <stdio.h>
#include <math.h>

float n, qua, cubo, raiz, raizc, rpow;

int main(){
	
	printf("Digite um numero\n");
	scanf("%f",&n);

qua = pow (n,2); //calcula n ao quadrado
cubo = pow (n,3); // || n ao cubo
raiz = sqrt(n); // calcula a raiz quadrada de n
raizc = cbrt(n); // calcula a raiz cubica de n
rpow = pow(n,1.0/3.0); // uma outra forma de calcular raiz

printf("\nO numero %.2f ao quadrado e %.2f\n", n,qua );
printf("\nO numero %.2f ao cubo e %.22f\n", n,cubo );
printf("\nA Raiz quadrada de %.2f e %.2f\n", n,raiz);
printf("\nA Raiz cubica de %.2f  e %.2f\n", n,raizc );
printf("\nA Raiz cubica de %.2f  e %.2f\n", n,rpow );


return 0;
}
