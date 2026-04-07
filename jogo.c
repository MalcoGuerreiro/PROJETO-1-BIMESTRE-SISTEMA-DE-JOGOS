#include <stdio.h>
#include <stdlib.h> 

int qualquermerda(){
	
	printf("fodase");
	return 0;
}



int main()
{
	int opcao;
	char ENTER;
	
	// Menu de start
	
	printf("Bem vindo!!! Voce esta jogando MALIMX.\n\n Pressione ENTER para ingressar o menu...\n\n");
	scanf("%c", &ENTER);
	system("cls");
	
	// Menu de escolha do jogo
	
	printf("=========================\n");
	printf("|        MaLiMx         |\n");
	printf("=========================\n");
	
	printf("\n1. Rerguntas e Pergostas\n");
	printf("2. Tem uma cobra na minha bota\n");
	printf("3. Os campeoes entram em GUERRA\n");
	printf("4. Sair\n\n");
	printf("Escolha seu jogo: ");
	scanf("%d", &opcao);
	system("cls");
	
	
	if(opcao == 1)
	{
		printf("<><><><><><><><><><><><><><><><><><><>");
		printf("\n<       RERGUNTAS E PERGOSTAS        >\n");
		printf("<><><><><><><><><><><><><><><><><><><>\n\n");
		printf("1. Jogar!\n");
		printf("2. Como Funciona?\n");
		printf("3. Sair\n");	
		
	
	}
	
	
	
	
	
	
	return 0;
}