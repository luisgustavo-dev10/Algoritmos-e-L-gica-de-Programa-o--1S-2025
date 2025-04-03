#include <stdio.h>
#include <math.h>

int main(int agc, char* argv []){

    char opcao;
    float r, A;

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
    
    break;
 case 'l':
    printf("Losango\n");
    break;
  case 'q':
    printf("Quadrado\n");
    break;
  case 'r':
    printf("Retangulo\n");
    break;
  case 't':
    printf("Triangulo\n");
    break;
  case 'z':
    printf("Trapezio\n");
    break;
    default:
    printf("Opcao Invalida");
    A = 0;
    break;

}
    return 0;
}