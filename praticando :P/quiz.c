#include <stdio.h>
int main(int argc, char* argvv[]){
int opcao;
printf("Quiz de futebol\n");
printf("Para os amantes do esporte\n");
printf("1 - para clubes europeus\n");
printf("2 - para clubes brasileiros\n");
scanf("%d",&opcao);
if(opcao == 1){
	printf("Qual dos clubes europeus têm mais champions?\n");
	printf("1- Real Madrid\n");
	printf("2- Liverpool\n");
	printf("3- Milan\n");
	scanf("%d",&opcao);
	if (opcao == 1){
		printf("Correta\n");
		printf("Parabens!!!");
		system("pause");
	}
	if(opcao == 2){
		printf("Errado\n");
		system("pause");
	}
	if(opcao == 3){
	    printf("Errado\n");
	    system("pause");
	}
	return 0;
}
if(opcao == 2){
	printf("Qual dos clubes brasileiros tem mais libertadores?\n");
	printf("1- Flamengo\n");
	printf("2- Palmeiras\n");
	printf("3- Corinthians\n");
	scanf("%d",&opcao);
	if(opcao == 1){
		printf("Correto\n");
		printf("Voce sabe muito hein!\n");
		system("pause");
	}
	if(opcao == 2){
		printf("Errado\n");
		printf("Sem mundial\n");
		system("pause");
	}
	if(opcao == 3){
		printf("Errado\n");
		printf("Possui 1 liberta e 2 mundiais [Como assim??]\n");
		system("pause");
	}
	return 0;;
}
    
    
    system("pause");
}
