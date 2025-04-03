#include <stdio.h>
int main(int argc, char* argv[]){
	float altura, base;
	float area_do_triangulo;
	printf("A altura do triangulo eh: ");
	scanf("%f", &altura);
	printf("A base do triangulo eh: ");
	scanf("%f", &base);
	
	area_do_triangulo = (altura * base / 2);
	printf("A area_do_triangulo eh: %.2f\n", area_do_triangulo);
	
	system("pause");
}
