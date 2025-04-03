#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char* argv[]){
    printf("\tCalculadora de IMC\n");
system("pause");
float peso, altura, IMC;

printf("Digite a sua altura: ");
    scanf("%f", &altura);
    printf("Digite o seu peso: ");
    scanf("%f", &peso);
system("pause");

IMC = peso/(altura*altura);
printf("Seu IMC e de: %.2f\n", IMC);

if(IMC< 18.5){
    printf("baixo peso\n");
}

if(IMC > 18.5 && IMC <= 24.9){
    printf("intervalo normal\n");
}
if(IMC > 24.9 && IMC <= 29.9){
    printf("sobrepeso\n");
}
if(IMC > 29.9 && IMC <= 34.9){
    printf("obesidade I\n");
}
if(IMC > 34.9 && IMC <= 39.9){
    printf("obesidade II\n");
}
if(IMC > 39.9){
    printf("obesidade III\n");
}
 system("pause");
}
