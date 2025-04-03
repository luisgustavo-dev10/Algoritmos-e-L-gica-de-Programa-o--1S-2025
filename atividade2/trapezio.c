#include <stdio.h>
int main(int argc, char* argv[]){
	float base_maior, base_menor, altura;
	float area_do_trapezio;
	printf("A base_maior eh: ");
	scanf("%f",&base_maior);
	printf("A base_menor eh: ");
	scanf("%f",&base_menor);
	printf("a altura eh: ");
	scanf("%f",&altura);
	
	area_do_trapezio = (base_maior + base_menor) * altura/2;
	printf("A area_do_trapezio eh: %.2f\n",area_do_trapezio);
	
	system("pause");
}
