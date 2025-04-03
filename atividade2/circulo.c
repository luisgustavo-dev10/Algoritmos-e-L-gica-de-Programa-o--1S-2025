#include <stdio.h>
int main(int argc, char* argv[]){
	printf("A area_do_circulo = pi * raio ao quadrado \n");
	float raio;
	float area_do_circulo;
	printf("O raio eh: ");
	scanf("%f",&raio);
	 
	area_do_circulo = 3.14 * (raio*raio);
	printf("A area_do_circulo eh : %.2f\n",area_do_circulo);
	
	system("pause");
}
