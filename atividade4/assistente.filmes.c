#include <stdio.h>
int main(int argc, char* argvv[]){
    int opcao;
    
    printf("Assistente virtual de filmes\n");
    printf("Funcao: recomendar filmes para voce \n");
    printf("Escolher tipo de filme: Intenso ou Leve\n");
    printf("1 - para Filmes leves\n");
    printf("2 - para Filmes intensos\n");
    scanf("%d", &opcao);
    
	if(opcao == 1){
		printf("Escolha o genero: \n");
		printf("1 - para Comedia \n");
		printf("2 - para Animacao \n");
		 scanf("%d", &opcao);
		if(opcao == 1){
			printf("Assistir o filme: As Branquelas\n");
			system("pause");
		}
		if (opcao == 2){
			printf("Assistir ao filme: Toy_Store\n");
			system("pause");
		}
		return 0;
	} 
	
	if(opcao == 2){
		printf("Escolha o genero: \n");
		printf("1 - para Terror\n");
		printf("2 - para acao\n");
		scanf("%d", &opcao);
		if(opcao == 1){
			printf("Escolha o tipo de Terror que voce goste: \n");
			printf ("1 - para  Terror psicologico\n");
			printf("2 - para Terror sobrenatural\n");
			scanf("%d", &opcao);
			if(opcao == 1){
				printf("Assistir ao filme: Corra!\n");
				system("pause");
			}
			if(opcao == 2){
				printf("Assistir ao filme: Invocacao_do_Mal\n");
				system("pause");
			}
			return 0;
			}
		if(opcao == 2){
			printf("Escolha o tipo de filme de acao que voce goste: \n");
			printf("1 - para filmes de Super_heroi\n");
			printf("2 - para filmes de aventura_realista\n");
			scanf("%d", &opcao);
			if(opcao == 1){
				printf("Assistir ao filme Vingadores_Ultimato\n");
				system("pause");
			}
		}	if(opcao == 2){
			printf(" Assistir ao filme: Mad Max - Estrada furia\n");
			system("pause");
		}
		return 0;
	}
	 system("pause");
	}
