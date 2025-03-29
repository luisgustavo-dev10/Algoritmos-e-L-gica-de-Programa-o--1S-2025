#include <stdio.h>

int main(int argc,char* argv[]){

float lado;
float area_do_quadrado;
printf("O lado do quadrado corresponde a: ");
scanf("%f", &lado);
area_do_quadrado = (lado * lado);
printf("A area_do_quadrado eh: %.2f ", area_do_quadrado);

return 0;

}
