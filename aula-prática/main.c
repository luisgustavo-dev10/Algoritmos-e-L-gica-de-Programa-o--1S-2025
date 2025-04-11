include <stdio.h>
int main(int argc, char* argvv[]){
int qtdAlunos;
int i;
printf("Notas sos alunos em matematica\n");
printf("Máximo de alunos: 10\n");
printf("Informe a quantidade de alunos: \n");
scanf("%d", &qtdAlunos);

printf("QtdAlunos: %d");

for(i = 1 ; i <= 8; i+=1)
{
float nota[] ={ 10.0 , 9.50 , 8.0 , 6.5 , 7.0 , 5.0};
printf("Notas dos alunos :\n");
printf("Qual a nota quer ter acesso? \n");
scanf("%d",&opcao);
if ( opcao == 0)
{
    printf("Nota [%d]\n %.2f", i , nota[0]);
    return 0;
}
if ( opcao == 1)
{
    printf("Nota [%d]\n %.2f", i , nota[1]);

}
if ( opcao == 2)
{
    printf("Nota [%d]\n %.2f", i , nota[2]);
}
if ( opcao == 3)
{
    printf("Nota [%d]\n %.2f", i , nota[3]);
}
}


    return 0;
}
