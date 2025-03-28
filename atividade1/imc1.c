#include <stdio.h> 

int main (int argc, char argvv[]){
float altura,peso,multi_altura, Resultado;
float IMC;
printf("Informe a altura: ");
scanf("%f", &altura );
printf("Informe o peso: ");
scanf("%f", &peso);
multi_altura = (altura * altura);
Resultado = peso / multi_altura;

IMC=Resultado;
printf("o IMC eh : %.2f", IMC);
system ("pause");

}
