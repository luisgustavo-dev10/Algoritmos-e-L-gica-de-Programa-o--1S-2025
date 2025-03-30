#include <stdio.h>
int main(int argc, char* argv[]){
	float altura, base;
	float area_do_retangulo;
	printf("A altura do retangulo eh: ");
	scanf("%f", &altura);
	printf("A base do retangulo eh: ");
	scanf("%f", &base);
	
	area_do_retangulo = (altura * base);
	printf("A area_do_retangulo eh: %.2f", area_do_retangulo);
	
	system("pause");
}
