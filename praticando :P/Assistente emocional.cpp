#include <stdio.h>
int main(int argc , char* argvv[]){
	int option;
	printf("Assistente emocional\n");
	printf("A fim de te da os melhores conselhos\n");
	printf("1 - para se vc precisa se encorajar\n");
	printf("2 - para se vc está triste\n");
	printf("3 - para se vc está preocupado\n");
	scanf("%d",&option);
	
	if(option == 1){
		printf("Voce e forte, encare seus desafios que no final voce sera feliz\n");
		
	}
	if(option == 2){
		printf("Não desanime, pois os planos de Deus te levarao ao caminho melhor\n");
	}
	if(option == 3){
		printf("Ponha suas preocupacoes nas maos do Senhor, acalme seu coracao\n");
	}
	return 0;
}
