#include <stdio.h>

int main (int argc, char* arggv []){
int idade = 30;
float altura = 1.72;
float peso = 79.85;
printf("Digite a idade: ");
scanf("%d", &idade);
printf("Digite a altura:");
scanf("%f", &altura);
printf("Digite o peso ");
scanf("%f", &peso);
printf("a idade eh %d\n", idade);
printf("altura eh %.2f\nO peso eh %.2f", altura);

float dobro_peso = peso* 2;
printf("o dobro do peso eh: %.2f", dobro_peso);

return 0;
}