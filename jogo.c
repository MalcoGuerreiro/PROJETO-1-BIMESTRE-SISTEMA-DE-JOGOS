#include <stdio.h>
#include <stdlib.h> 
#include <time.h>
#include <conio.h>
#include <locale.h>
#include <windows.h>

int main()
{
setlocale(LC_ALL,"portuguese");	
	
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
		
		case 2:
		system("cls");
		printf("COMO FUNCIONA:\n\n");
		printf("-Voce ira se deparar com um sequencia de 5 perguntas\n-Cada uma delas tera 4 alternativas\n-O objetivo eh acertar o maximo de questoes possivel.\n\n");
		printf("Pressione ENTER para retornar ao menu do jogo...");
		getchar();
		getchar();
		system("cls");
		menurep();
		break;
		
		case 3:
		system("cls");
		printf("HISTORIA:\n");	
		printf("\nAs portas se abrem para o Hall do Quiz, um vazio cheio de luz neon.\n");
    	printf("Caine flutua com cartoezinhos: \"Bem-vindos ao show! Nao fiquem parados!\"\n");
    	printf("\"Primeira pergunta: voces ainda lembram quem eram la fora?\"\n");
    	printf("O silencio ecoa e os cartoes brilham agressivamente.\n");
    	printf("\"Tempo esgotado!\" Caine ri. \"Nao importa, o jogo so esta comecando!\"\n");
		printf("\nPressione ENTER para retornar ao menu do jogo...");
		getchar();
		getchar();
		system("cls");
		menurep();
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
		
		case 1:
		system("cls");
		jogocnb();	
		break;
			
		case 2:
		system("cls");
		printf("COMO FUNCIONA:\n\n");	
		printf("- Cada jogador escolhe um nome de uma lista de 7 opcoes disponiveis.\n");
		printf("- O sistema sorteia quem inicia e define as posicoes distintas do botao e da cobra.\n");
		printf("- Jogadores alternam turnos escolhendo caixas fechadas de 1 a 5.\n");
		printf("- Botao: vitoria imediata / Cobra: derrota imediata / Vazia: troca de turno.\n");
		printf("- Escolha de caixa ja aberta eh bloqueada, exigindo uma nova tentativa do jogador.\n");	
		printf("\nPressione ENTER para retornar ao menu do jogo...");
		getchar();
		getchar();
		system("cls");
		menucnb();
		break;

		case 3:
		system("cls");
		printf("HISTORIA:\n");
		printf("\nO sol castiga o deserto e Andy deixou suas botas espalhadas pelo quarto.\n");
		printf("Woody e o bando estao em alerta porque um bicho peconhento se escondeu.\n");
		printf("Voce precisa encontrar o botao premiado antes de colocar o pe no perigo.\n");
		printf("Mas cuidado parceiro: se o Woody gritar que tem uma cobra na bota, ja era!\n");
		printf("E hora de testar sua sorte e ver quem e o xerife mais rapido do Oeste.\n");	
		printf("\nPressione ENTER para retornar ao menu do jogo...");
		getchar();
		getchar();
		system("cls");
		menucnb();    	   	
		
		case 4:
		system("cls");
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
		
		case 1:
		system("cls");
		jogow();	
		break;
		
		
		case 2:
		system("cls");
		printf("COMO FUNCIONA:\n\n");
		printf("- OBJETIVO: Destruir os 2 campeoes do adversario.\n");
		printf("- FURIA: Se a furia de um campeao passar de 5, ele eh destruido.\n");
		printf("- ATAQUE: Soma a furia do seu campeao a furia do campeao inimigo.\n");
		printf("- DIVIDIR: Transfere furia entre seus campeoes para equilibrar a batalha.\n");
		printf("   . Regra: So pode dividir se a furia do doador for PAR.\n");
		printf("   . Regra: A furia do doador nao pode zerar e o alvo nao deve exceder 5.\n");
		printf("5. TURNOS: Apenas 1 acao por turno. O jogo termina se um dos dois jogadores ficar sem campeoes.\n");
		printf("\nPressione ENTER para retornar ao menu do jogo...");
		getchar();
		getchar();
		system("cls");
		menuw();
		break;
		
		case 3:
		system("cls");
		printf("HISTORIA:\n\n");	
		printf("O lodo da Calamidade corrompeu as Reliquias Divinas!\n");
		printf("Revali, Daruk, Mipha e Urbosa perderam o controle de\n");
		printf("suas furias elementares e iniciaram um duelo mortal.\n");
		printf("Como generais de Hyrule, voces devem dominar essa\n");
		printf("energia instavel. Se a furia de um Campeao transbordar,\n");
		printf("ele sera consumido pelo poder que jurou proteger.\n");
		printf("Equilibre sua forca ou destrua seus antigos aliados!\n");
		printf("\nPressione ENTER para retornar ao menu do jogo...");
		getchar();
		getchar();
		system("cls");
		menurep();
		break;	
		
		case 4:
		system("cls");
		main();
		break;
	}
}

void jogorep(){
		
// uso de I.A na ASCII ART													 |
    printf("   ¦¦¦¦¦¦+  ¦¦+ ¦¦¦¦¦¦+  ¦¦+¦ ¦¦¦¦¦¦¦+ ¦¦¦¦¦+  ¦¦+     \n");
    printf("   ¦¦+--¦¦+ ¦¦¦ ¦¦+----+  ¦¦¦ +--¦¦+--+¦¦+--¦¦ +¦¦¦     \n");
    printf("   ¦¦¦  ¦¦¦ ¦¦¦ ¦¦¦  ¦¦¦ +¦¦¦    ¦¦¦   ¦¦¦¦¦¦¦ ¦¦¦¦     \n");
    printf("   ¦¦¦  ¦¦¦ ¦¦¦ ¦¦¦   ¦¦ ¦¦¦¦    ¦¦¦   ¦¦+--¦¦ ¦¦¦¦     \n");
    printf("   ¦¦¦¦¦¦++ ¦¦¦ +¦¦¦¦¦¦+ +¦¦¦    ¦¦¦   ¦¦¦  ¦¦ ¦¦¦¦¦¦¦¦+\n");
    printf("   +-----+  +-+ +-----+  +-+    +-+   +-+  +-+ +------+\n\n");

    printf("   ¦¦¦¦¦¦+ ¦¦+ ¦¦¦¦¦¦+  ¦¦¦¦¦¦+ ¦¦+   ¦¦+¦ ¦¦¦¦¦¦+\n");
    printf("  ¦¦+----+ ¦¦¦ ¦¦+--¦¦ +¦¦+----+ ¦¦¦   ¦¦¦ ¦¦+----+\n");
    printf("  ¦¦¦      ¦¦¦ ¦¦¦¦¦¦+ +¦¦¦      ¦¦¦   ¦¦¦ ¦¦¦¦¦¦¦+\n");
    printf("  ¦¦¦      ¦¦¦ ¦¦+--¦¦ +¦¦¦      ¦¦¦   ¦¦¦ +----¦¦¦\n");
    printf("  +¦¦¦¦¦¦+ ¦¦¦ ¦¦¦  ¦¦¦ +¦¦¦¦¦¦+ +¦¦¦¦¦¦+ +¦¦¦¦¦¦¦¦\n");
    printf("   +-----+ +-+ +-+  +-+ +-----+  +-----+  +------+\n\n");


    printf("      .-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-.\n");
    printf("      |   BEM VINDO AO SHOW!!!    |\n");
    printf("      '-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-'\n\n");
//                                                                          |
	system("pause");
	
	printf("aperte ENTER para iniciar o quiz...");
	getchar();
	system("cls");
	
	char n, s, opcao1, opcao2, opcao3, opcao4, opcao5;
	int SEC = 0;
	
	printf("PERGUNTA NÚMERO 1: qual é o nome da empresa por tras do experimento do digital circus?\n\n");
	printf("A) C&A\n");
	printf("B) Monsters, INC.\n");
	printf("C) UFPA\n");
	printf("D) cESUPA\n");
	
	printf("\n\nescolha a opção correta ----->");
	scanf(" %c", &opcao1);
	
	switch(opcao1)
	{
	case 'a':
		printf(" \nresposta certa!\n\n\n");
		break;
	case 'd':
		SEC += 1;
		printf("\nresposta errada!!!      --> A era a certa\n\n\n");
		break; 
	default:
		printf("\nresposta errada!!!      --> A era a certa\n\n\n");
		break;
	}
	printf("carregando a próxima pergunta...");
	Sleep(5000);
	system("cls");
	
	printf("PERGUNTA NÚMERO 2: quais desses personagens abstrairam?\n\n");
	printf("A) pomni\n");
	printf("B) ribbit\n");
	printf("C) kinger\n");
	printf("D) Jax\n");
	
	printf("\n\nescolha a opção correta ----->");
	scanf(" %c", &opcao2);
	
	switch(opcao2)
	{
	case 'b':
		printf(" \nresposta certa!\n\n\n");
		break;
	case 'd':
		SEC += 1;
		printf("\nresposta errada!!!      --> B era a certa\n\n\n");
		break; 
	default:
		printf("\nresposta errada!!!      --> B era a certa\n\n\n");
		break;
	}
	printf("só um segundinho...");
	Sleep(5000);
	system("cls");	
	
	printf("PERGUNTA NÚMERO 3: quem tem o controle sobre o circo?\n\n");
	printf("A) caine\n");
	printf("B) Malco\n");
	printf("C) bolha\n");
	printf("D) scratch\n");
	
	printf("\n\nescolha a opção correta ----->");
	scanf(" %c", &opcao3);
	
	switch(opcao3)
	{
	case 'a':
		printf(" \nresposta certa!\n\n\n");
		break;
	case 'b':
		SEC += 1;
		printf("\nresposta errada!!!      --> A era a certa\n\n\n");
		break; 
	default:
		printf("\nresposta errada!!!      --> A era a certa\n\n\n");
		break;
	}
	printf("carregando próxima...");
	Sleep(5000);
	system("cls");
	
	printf("PERGUNTA NÚMERO 4: quem é o personagem mais sabichão?\n\n");
	printf("A) Scratch\n");
	printf("B) gangle\n");
	printf("C) pomni\n");
	printf("D) kinger\n");
	
	printf("\n\nescolha a opção correta ----->");
	scanf(" %c", &opcao4);
	
	switch(opcao4)
	{
	case 'd':
		printf(" \nresposta certa!\n\n\n");
		break;
	case 'a':
		SEC += 1;
		printf("\nresposta errada!!!      --> D era a certa\n\n\n");
		break; 
	default:
		printf("\nresposta errada!!!      --> D era a certa\n\n\n");
		break;
	}
	printf("quase lá...");
	Sleep(5000);
	system("cls");
	
	printf("PERGUNTA NÚMERO 5: qual desses é o personagem mais antigo\n\n");
	printf("A) kinger\n");
	printf("B) glep\n");
	printf("C) kaufmo\n");
	printf("D) caine\n");
	printf("E) ?????\n");
	
	printf("\n\nescolha a opção correta ----->");
	scanf(" %c", &opcao5);
	
	switch(opcao5)
	{
	case 'b':
		printf(" \nresposta certa!\n\n\n");
		break;
	case 'e':
		SEC += 1;
		printf("\nresposta errada!!!      --> B era a certa\n\n\n");
		break; 
	default:
		printf("\nresposta errada!!!      --> B era a certa\n\n\n");
		break;
	}
		printf("..........\n");
		if(SEC == 5){Sleep(10000);
		printf("CADÊ O KINGER!?\n\n\n");
// uso de I.A na ASCII ART		
	printf("              .-.\n");
    printf("             /   \\\n");
    printf("            | RIP |\n");
    printf("            |     |\n");
    printf("          __|_____|__\n");
    printf("        /             \\\n");
    printf("       /_______________\\\n");
    printf("\n");

    printf("        .-.\t     .-.\n");
    printf("       /   \\\t   /   \\\n");
    printf("      | RIP |\t  | RIP |\n");
    printf("      |     |\t  |     |\n");
    printf("    __|_____|__ __|_____|__\n");
    printf("  /             V           \\\n");
    printf(" /___________________________\\\n");
	}
	else
	{
	printf("carregando...");
	Sleep(5000);
	system("cls");
	}

	

	

	
	
	}

void jogocnb(){
	
	//jogo 2
	
	printf("teste");
	
	
	
	
	
}



void jogow(){

	// jogo 3
		
	printf("A Guerra comeca AGORA!\n\n");
	printf("========================================\n");
	printf("     DARUK        //      URBOSA       \n");
	printf("========================================\n\n");
	printf("                  VS                    \n\n");
	printf("========================================\n");
	printf("     REVALI      //       MIPHA       \n");
	printf("========================================\n\n");
	
	
	
	
	
	
	
	
	
	
}














































