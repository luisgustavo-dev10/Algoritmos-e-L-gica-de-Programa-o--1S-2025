#include <stdio.h>
#include <math.h>

int main(int agc, char* argv []){

    char opcao;
    float r, A , area_do_circulo, raio, lado, diagonal_maior, diagonal_menor, area_do_losango, area_do_quadrado, altura, base, area_do_retangulo,base_maior, base_menor, area_do_trapezio,area_do_triangulo;

    printf("area.c\n");
    printf("Escolha uma opcao: \n");
    printf("c - para area do circulo\n");
    printf("l - losango\n");
    printf("q - quadrado \n");
    printf(" r - retangulo\n");
    printf(" t - traiangulo \n");
    printf(" z - trapezio \n");

    scanf("%c", &opcao);
switch(opcao){
 case 'c':
    printf("Circulo\n");
    printf("A area_do_circulo = pi * raio ao quadrado \n");
	printf("O raio eh: ");
	scanf("%f",&raio);
	 
	area_do_circulo = 3.14 * (raio*raio);
    break;
 case 'l':
    printf("Losango\n");
    printf("A diagonal_maior eh: ");
	scanf("%f",&diagonal_maior);
	printf("A diagonal_menor eh:  ");
	scanf("%f",&diagonal_menor);
	
	area_do_losango = (diagonal_maior * diagonal_menor / 2);
	printf("A area_do_losango eh: %.2f\n", area_do_losango);
    break;
  case 'q':
	printf("Quadrado\n");
    printf("O lado do quadrado corresponde a: ");
    scanf("%f", &lado);
    area_do_quadrado = (lado * lado);
    printf("A area_do_quadrado eh: %.2f \n", area_do_quadrado);
    break;
  case 'r':
    printf("Retangulo\n");
    printf("A altura do retangulo eh: ");
	scanf("%f", &altura);
	printf("A base do retangulo eh: ");
	scanf("%f", &base);
	
	area_do_retangulo = (altura * base);
	printf("A area_do_retangulo eh: %.2f\n", area_do_retangulo);
    break;
  case 't':
    printf("Triangulo\n");
    printf("A altura do triangulo eh: ");
	scanf("%f", &altura);
	printf("A base do triangulo eh: ");
	scanf("%f", &base);
	
	area_do_triangulo = (altura * base / 2);
	printf("A area_do_triangulo eh: %.2f\n", area_do_triangulo);
    break;
  case 'z':
    printf("Trapezio\n");
    printf("A base_maior eh: ");
	scanf("%f",&base_maior);
	printf("A base_menor eh: ");
	scanf("%f",&base_menor);
	printf("a altura eh: ");
	scanf("%f",&altura);
	
	area_do_trapezio = (base_maior + base_menor) * altura/2;
	printf("A area_do_trapezio eh: %.2f\n",area_do_trapezio);
    break;
    default:
    printf("Opcao Invalida");
    A = 0;
    break;

}
    return 0;
}
