#include <stdio.h>
#include <stdlib.h> 

int main()
{
	int opcao;
	
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
	
	switch(opcao){
		
		case 1:
		menurep();
		break;
	
		case 2:
		menucnb();
		break;			
		
		case 3:
		menuw();
		break;	
	
		case 4:
		printf("\nSAINDO...\n\n");
		break;
	
		default:
		printf("\nOPCAO INVALIDA... Por favor escolha uma das opcoes entre 1-4\n");	
		printf("\nPressione ENTER para voltar ao menu principal...\n");
		getchar();
		getchar();
		system("cls");
		main();
		break;
	
	
	
	
	}
	
	return 0;
}

int menurep(){
	
	//menu jogo 1
	
	int opcaorep;
	
	printf("<><><><><><><><><><><><><><><><><><><>");
	printf("\n<       RERGUNTAS E PERGOSTAS        >\n");
	printf("<><><><><><><><><><><><><><><><><><><>\n\n");
	printf("1. Jogar!\n");
	printf("2. Como Funciona?\n");
	printf("3. Historia\n");
	printf("4. Sair (Voltar para o menu principal)\n");
	printf("\nEscolha sua acao: ");
	
	scanf("%d", &opcaorep);

	switch(opcaorep){
		
		case 1:
		system("cls");
		jogorep();
		break;	
		
		
		
		case 4:
		system("cls");
		main();
		break;
	}
}

int menucnb(){
	
	//menu jogo 2 (tucnmb)
	
	int opcaocnb;
	
	printf("<><><><><><><><><><><><><><><><><><><>");
	printf("\n<    TEM UMA COBRA NA MINHA BOTA     >\n");
	printf("<><><><><><><><><><><><><><><><><><><>\n\n");
	printf("1. Jogar!\n");
	printf("2. Como Funciona?\n");
	printf("3. Historia\n");
	printf("4. Sair (Voltar para o menu principal)\n");
	printf("\nEscolha sua acao: ");
	
	scanf("%d", &opcaocnb);
	
	switch(opcaocnb){
		
		
		
		
		
		
		
		
		
		
		
		
		
		case 4:
		main();
		break;
	}
	
	

}

int menuw(){
	
	//menu jogo 3
	
	int opcaow;
	
		int opcaocnb;
	
	printf("<><><><><><><><><><><><><><><><><><><>");
	printf("\n<   OS CAMPEOES ENTRAM EM GUERRA!    >\n");
	printf("<><><><><><><><><><><><><><><><><><><>\n\n");
	printf("1. Jogar!\n");
	printf("2. Como Funciona?\n");
	printf("3. Historia\n");
	printf("4. Sair (Voltar para o menu principal)\n");
	printf("\nEscolha sua acao: ");
	
	scanf("%d", &opcaow);
	
	switch(opcaow){
		
		
		
		
		
		
		
		
		
		
		
		
		
		case 4:
		main();
		break;
	}
}

void jogorep(){
	
	printf("teste");
	
	
	
	
}



















































