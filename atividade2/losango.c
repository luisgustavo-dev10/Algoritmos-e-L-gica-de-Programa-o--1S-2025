#include <stdio.h>
int main(int argc, char* argv[]){
	float diagonal_maior, diagonal_menor;
	float area_do_losango;
	printf("A diagonal_maior eh: ");
	scanf("%f",&diagonal_maior);
	printf("A diagonal_menor eh:  ");
	scanf("%f",&diagonal_menor);
	
	area_do_losango = (diagonal_maior * diagonal_menor / 2);
	printf("A area_do_losango eh: %.2f\n", area_do_losango);
	
	system("pause");
	
}
	
