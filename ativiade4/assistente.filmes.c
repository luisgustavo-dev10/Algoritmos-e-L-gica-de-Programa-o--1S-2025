#include <stdio.h>
int main(int argc, char* argvv[]){
    int opcao;
    
    printf("Assistente virtual de filmes\n");
    printf("Funcao: recomendar filmes para voce \n");
    printf("Escolher tipo de filme: Intenso ou Leve\n");
    printf("1 - Filmes leves\n");
    printf("2 - Filmes intensos\n");
    scanf("%d", &opcao);
    
	if(opcao == 1){
		printf("Escolha o genero: \n");
		printf("1 - Comedia \n");
		printf("2 - Animacao \n");
		 scanf("%d", &opcao);
		if(opcao == 1){
			printf("Assistir o filme: As Branquelas\n");
		}
		if (opcao == 2){
			printf("Assistir ao filme: Toy_Store\n");
		}
		return 0;
	} 
	
	if(opcao == 2){
		printf("Escolha o genero: \n");
		printf("1 - Terror\n");
		printf("2 - acao\n");
		scanf("%d", &opcao);
		if(opcao == 1){
			printf("Escolha o tipo de Terror que voce goste: \n");
			printf ("1 - Terror psicologico\n");
			printf("2 - Terror sobrenatural\n");
			scanf("%d", &opcao);
			if(opcao == 1){
				printf("Assistir ao filme: Corra!\n");
				return 0;
			}
			if(opcao == 2){
				printf("Assistir ao filme: Invocacao_do_Mal\n");
				return 0;
			}
			}
		if(opcao == 2){
			printf("Escolha o tipo de filme de acao que voce goste: \n");
			printf("1 - para filmes de Super_heroi\n");
			printf("2 - para filmes de aventura_realista\n");
			scanf("%d", &opcao);
			if(opcao == 1){
				printf("Assistir ao filme Vingadores_Ultimato\n");
				return 0;
			}
		}	if(opcao == 2){
			printf(" Assistir ao filme: Mad Max - Estrada furia\n");
			return 0;
		}
	}
	 system("pause");
	}
