#include <stdio.h>
#include <stdlib.h> 
#include <time.h>
#include <conio.h>
#include <locale.h>
#include <windows.h>

int menurep();
int menucnb();
int menuw();
void jogorep();
void jogocnb();
void jogow();

int main()
{
setlocale(LC_ALL,"portuguese");	
	
	int opcao;
	
	while(1){
	
	printf("=========================\n");
	printf("|        MaLiMx         |\n");
	printf("=========================\n");
	
	printf("\n1. Rerguntas e Pergostas\n");
	printf("2. Tem uma cobra na minha bota\n");
	printf("3. Os campeoes entram em GUERRA\n");
	printf("4. Sair\n\n");
	printf("Escolha sua opcao: ");
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
		printf("SAINDO...\n");
		return 0;
	
		default:
    	system("cls");
    	printf("Opcao invalida! Por favor escolha uma opcao entre 1 - 4.\n\n");
    	printf("Pressione ENTER para retornar ao menu do jogo...");
    	while (getchar() != '\n');
    	getchar();                
    	system("cls");
    	break;	
	}

	}
		
	return 0;

}

int menurep(){
	
	//menu jogo 1
	
	int opcaorep;
	
	while(1){
	
	system("cls");
	
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
		while (getchar() != '\n');
		getchar();
		system("cls");
		break;	
			
		case 4:
		system("cls");
		return 0;
	
	   	default:
    	system("cls");
    	printf("Opcao invalida! Por favor escolha uma opcao entre 1 - 4.\n\n");
    	printf("Pressione ENTER para retornar ao menu do jogo...");
    	while (getchar() != '\n');
    	getchar();                
    	system("cls");
    	break;	
	}
}
}

int menucnb(){
	
	//menu jogo 2 (tucnmb)
	
	int opcaocnb;
	
	while(1) {
	
	system("cls");
		
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
		break;
		
		case 4:
		system("cls");
		return;
	
		default:
    	system("cls");
    	printf("Opcao invalida! Por favor escolha uma opcao entre 1 - 4.\n\n");
    	printf("Pressione ENTER para retornar ao menu do jogo...");
    	while (getchar() != '\n');
    	getchar();                
    	system("cls");
    	break;   	
	}
	
}

}

int menuw(){
	
	//menu jogo 3
	
	int opcaow;
	
	while (1) {
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
		while (getchar() != '\n');
		getchar();
		system("cls");
		system("cls");
		break;	
		
		case 4:
		system("cls");
		return;
		
		default:
    	system("cls");
		printf("Opcao invalida!\n\n");
    	printf("Pressione ENTER para retornar ao menu do jogo...");
    	while (getchar() != '\n');
    	getchar();                 
    	system("cls");
    	break;

	}
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
    printf("      |      BEM VINDO AO SHOW!!!     |\n");
    printf("      '-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-'\n\n");
//                                                                          |
	system("pause");
	
	printf("aperte ENTER para iniciar o quiz...");
	getchar();
	system("cls");
	
	char SN, opcao1, opcao2, opcao3, opcao4, opcao5;
	int SEC = 0, ACE = 0;
	
	do{
		system("cls");
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
	case 'A':	
		ACE += 1;
		printf(" \nresposta certa!\n\n\n");
		break;
	case 'b':
	case 'B':	
		printf("\nresposta errada!!!-------->  A era a certa\n\n\n");
		break;
	case 'c':
	case 'C':	
		printf("\nresposta errada!!!-------->  A era a certa\n\n\n");
		break;
	case 'd':
	case 'D':	
		SEC += 1;
		printf("\nresposta errada!!!-------->  A era a certa\n\n\n");
		break; 
		}
	}while(opcao1 != 'a' && opcao1 != 'A' &&
  	  	  opcao1 != 'b' && opcao1 != 'B' &&
          opcao1 != 'c' && opcao1 != 'C' &&
	      opcao1 != 'd' && opcao1 != 'D');
	      
	printf("carregando a próxima pergunta...");
	Sleep(2000);
	system("cls");


	do{
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
	case 'B':
		ACE += 1;
		printf(" \nresposta certa!\n\n\n");
		break;
	case 'a':
	case 'A':	
		printf("\nresposta errada!!!-------->  B era a certa\n\n\n");
		break;
	case 'c':
	case 'C':	
		printf("\nresposta errada!!!-------->  B era a certa\n\n\n");
		break;
	case 'd':
	case 'D':	
		SEC += 1;
		printf("\nresposta errada!!!-------->  B era a certa\n\n\n");
		break; 
		}
	}while(opcao2 != 'a' && opcao2 != 'A' &&
  	  	   opcao2 != 'b' && opcao2 != 'B' &&
           opcao2 != 'c' && opcao2 != 'C' &&
	       opcao2 != 'd' && opcao2 != 'D');
	      
	printf("carregando a próxima pergunta...");
	Sleep(2000);
	system("cls");
	
	do{
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
	case 'A':
		ACE += 1;	
		printf(" \nresposta certa!\n\n\n");
		break;
	case 'b':
	case 'B':
		SEC += 1;	
		printf("\nresposta errada!!!-------->  A era a certa\n\n\n");
		break;
	case 'c':
	case 'C':	
		printf("\nresposta errada!!!-------->  A era a certa\n\n\n");
		break;
	case 'd':
	case 'D':	
		printf("\nresposta errada!!!-------->  A era a certa\n\n\n");
		break; 
		}
	}while(opcao3 != 'a' && opcao3 != 'A' &&
  	  	   opcao3 != 'b' && opcao3 != 'B' &&
           opcao3 != 'c' && opcao3 != 'C' &&
	       opcao3 != 'd' && opcao3 != 'D');
	      
	printf("carregando a próxima pergunta...");
	Sleep(2000);
	system("cls");
	
	do{
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
	case 'D':
		ACE += 1;	
		printf(" \nresposta certa!\n\n\n");
		break;
	case 'b':
	case 'B':	
		printf("\nresposta errada!!!-------->  D era a certa\n\n\n");
		break;
	case 'c':
	case 'C':	
		printf("\nresposta errada!!!-------->  D era a certa\n\n\n");
		break;
	case 'a':
	case 'A':	
		SEC += 1;
		printf("\nresposta errada!!!-------->  D era a certa\n\n\n");
		break; 
		}
	}while(opcao4 != 'a' && opcao4 != 'A' &&
  	  	   opcao4 != 'b' && opcao4 != 'B' &&
           opcao4 != 'c' && opcao4 != 'C' &&
	       opcao4 != 'd' && opcao4 != 'D');
	      
	printf("carregando a próxima pergunta...");
	Sleep(2000);
	system("cls");
	
	do{
		system("cls");
	printf("PERGUNTA NÚMERO 5: qual desses é o personagem mais antigo\n\n");
	printf("A) kinger\n");
	printf("B) glep\n");
	printf("C) kaufmo\n");
	printf("D) caine\n");
	printf("E) ?????\n");	
	printf("\n\nescolha a opção correta ----->");
	scanf(" %c", &opcao5);
	
	
	switch(opcao5){
	
	case 'b':
	case 'B':
		ACE += 1;	
		printf(" \nresposta certa!\n\n\n");
		break;
	case 'a':
	case 'A':	
		printf("\nresposta errada!!!-------->  B era a certa\n\n\n");
		break;
	case 'c':
	case 'C':	
		printf("\nresposta errada!!!-------->  B era a certa\n\n\n");
		break;
	case 'd':
	case 'D':	
		printf("\nresposta errada!!!-------->  B era a certa\n\n\n");
		break; 
	case 'e':
	case 'E':
		SEC += 1;
		printf("\nresposta errada!!!--------> B era a certa\n\n\n");	
		}
	}while(opcao5 != 'a' && opcao5 != 'A' &&
  	  	   opcao5 != 'b' && opcao5 != 'B' &&
           opcao5 != 'c' && opcao5 != 'C' &&
	       opcao5 != 'd' && opcao5 != 'D' &&
		   opcao5 != 'e' && opcao5 != 'E');
    
			printf("carregando resultado");
		Sleep(2000);
		system("cls");
		
		if(SEC == 5){Sleep(10000);
		printf("..........\n");
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
    
    	printf("\n\nnúmero de acertos: !?!??!?!??!?!?!?\n\n\n");
		printf("\nPressione ENTER para continuar...");
    	getchar();
    	getchar();    	
	}	
		
	do{
	system("cls");
	printf("seus acertos: %d/5\n\n\n", ACE);
	printf("deseja jogar novamente? (S/N)");
	SN = _getch();
	switch(SN)
	{
	case 's':
    system("cls");
    jogorep();
    break;
	case 'n':
    system("cls");
    main();
    break;}
	}while (SN != 's' && SN != 'S' &&
        SN != 'n' && SN != 'N'   );
	}

void jogocnb() {
// uso de I.A na ACSII ART
    printf("           /^\\/^\\\n");
    printf("         _|__|  O|\n");
    printf("\\/     /~     \\_/ \\\n");
    printf(" \\____|__________/  \\\n");
    printf("        \\_______      \\\n");
    printf("                `\\     \\                 \\\n");
    printf("                  |     |                  \\\n");
    printf("                 /      /                    \\\n");
    printf("                /     /                       \\\n");
    printf("              /      /                         \\ \\\ n");
    printf("             /     /                            \\  \\\n");
    printf("           /     /             _----_            \\   \\\n");
    printf("          /     /           _-~      ~-_         |   |\n");
    printf("         (      (        _-~    _--_    ~-_     _/   |\n");
    printf("          \\      ~-____-~    _-~    ~-_    ~-_-~    /\n");
    printf("            ~-_           _-~          ~-_       _-~\n");
    printf("               ~--______-~                ~-___-~\n\n\n");

    printf("¦¦¦¦¦¦¦¦+¦¦¦¦¦¦¦+¦¦¦+   ¦¦¦+    ¦¦+   ¦¦+¦¦¦+   ¦¦¦+ ¦¦¦¦¦+ \n");
    printf("+--¦¦+--+¦¦+----+¦¦¦¦+ ¦¦¦¦¦    ¦¦¦   ¦¦¦¦¦¦¦+ ¦¦¦¦¦¦¦+--¦¦+\n");
    printf("   ¦¦¦   ¦¦¦¦¦+  ¦¦+¦¦¦¦+¦¦¦    ¦¦¦   ¦¦¦¦¦+¦¦¦¦+¦¦¦¦¦¦¦¦¦¦¦\n");
    printf("   ¦¦¦   ¦¦+--+  ¦¦¦+¦¦++¦¦¦    ¦¦¦   ¦¦¦¦¦¦+¦¦++¦¦¦¦¦+--¦¦¦\n");
    printf("   ¦¦¦   ¦¦¦¦¦¦¦+¦¦¦ +-+ ¦¦¦    +¦¦¦¦¦¦++¦¦¦ +-+ ¦¦¦¦¦¦  ¦¦¦\n");
    printf("   +-+   +------++-+     +-+     +-----+ +-+     +-++-+  +-+\n\n");

    printf(" ¦¦¦¦¦¦+ ¦¦¦¦¦¦+ ¦¦¦¦¦¦+ ¦¦¦¦¦¦+  ¦¦¦¦¦+ \n");
    printf("¦¦+----+¦¦+---¦¦+¦¦+--¦¦+¦¦+--¦¦+¦¦+--¦¦+\n");
    printf("¦¦¦     ¦¦¦   ¦¦¦¦¦¦¦¦¦++¦¦¦¦¦¦++¦¦¦¦¦¦¦¦\n");
    printf("¦¦¦     ¦¦¦   ¦¦¦¦¦+--¦¦+¦¦+--¦¦+¦¦+--¦¦¦\n");
    printf("+¦¦¦¦¦¦++¦¦¦¦¦¦++¦¦¦¦¦¦++¦¦¦  ¦¦¦¦¦¦  ¦¦¦\n");
    printf(" +-----+ +-----+ +-----+ +-+  +-++-+  +-+\n\n");

    printf("¦¦¦+   ¦¦+ ¦¦¦¦¦+     ¦¦¦+   ¦¦¦+¦¦+¦¦¦+   ¦¦+¦¦+  ¦¦+ ¦¦¦¦¦+ \n");
    printf("¦¦¦¦+  ¦¦¦¦¦+--¦¦+    ¦¦¦¦+ ¦¦¦¦¦¦¦¦¦¦¦¦+  ¦¦¦¦¦¦  ¦¦¦¦¦+--¦¦+\n");
    printf("¦¦+¦¦+ ¦¦¦¦¦¦¦¦¦¦¦    ¦¦+¦¦¦¦+¦¦¦¦¦¦¦¦+¦¦+ ¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦\n");
    printf("¦¦¦+¦¦+¦¦¦¦¦+--¦¦¦    ¦¦¦+¦¦++¦¦¦¦¦¦¦¦¦+¦¦+¦¦¦¦¦+--¦¦¦¦¦+--¦¦¦\n");
    printf("¦¦¦ +¦¦¦¦¦¦¦¦  ¦¦¦    ¦¦¦ +-+ ¦¦¦¦¦¦¦¦¦ +¦¦¦¦¦¦¦¦  ¦¦¦¦¦¦  ¦¦¦\n");
    printf("+-+  +---++-+  +-+    +-+     +-++-++-+  +---++-+  +-++-+  +-+\n\n");

    printf("¦¦¦¦¦¦+  ¦¦¦¦¦¦+ ¦¦¦¦¦¦¦¦+ ¦¦¦¦¦+ \n");
    printf("¦¦+--¦¦+¦¦+---¦¦++--¦¦+--+¦¦+--¦¦+\n");
    printf("¦¦¦¦¦¦++¦¦¦   ¦¦¦   ¦¦¦   ¦¦¦¦¦¦¦¦\n");
    printf("¦¦+--¦¦+¦¦¦   ¦¦¦   ¦¦¦   ¦¦+--¦¦¦\n");
    printf("¦¦¦¦¦¦+++¦¦¦¦¦¦++   ¦¦¦   ¦¦¦  ¦¦¦\n");
    printf("+-----+  +-----+    +-+   +-+  +-+\n");

	printf("\n\nbem vindo ao CNB!\n\n");
	system("pause");
	getchar();
	system("cls");
	
	char escolha1, escolha2;
	
	do {
	
	system("cls");
	printf("PLAYER 1 - Escolha seu personagem:\n");
	printf("\nA) WOODY\nB) BUZZ\nC) SLINKY\nD) BETTY\nE) REX\nF) KILLIAN\nG) VAL\n\n");
	printf("Sua escolha: ");
	scanf(" %c", &escolha1);
	escolha1 = toupper(escolha1);
	
	} 
	
	while(escolha1 != 'A' && escolha1 != 'B' &&
           	    escolha1 != 'C' && escolha1 != 'D' &&
			    escolha1 != 'E' && escolha1 != 'F' &&
           	    escolha1 != 'G');
    do{ 
	
	system("cls");
	printf("PLAYER 2 - Escolha seu personagem:\n");
	printf("\nA) WOODY\nB) BUZZ\nC) SLINKY\nD) BETTY\nE) REX\nF) KILLIAN\nG) VAL\n\n");
	printf("Sua escolha: ");
	scanf(" %c", &escolha2);
	escolha2 = toupper(escolha2);
	} 
	while((escolha2 != 'A' && escolha2 != 'B' &&
  	   	   	    escolha2 != 'C' && escolha2 != 'D' &&
				escolha2 != 'E' && escolha2 != 'F' &&
           	    escolha2 != 'G')|| escolha2 == escolha1);
					  	
	system("cls");
   				 	  
	srand(time(NULL));
	int sorteio = rand()%2;
	int c1=0, c2=0, c3=0, c4=0, c5=0;			
	int botao = rand()%5 + 1;
	int cobra;   	      	   
	int escolha;			
	
	do{
		cobra = rand()%5 + 1;
	}
	
	while(cobra == botao);	
				
	while(1) {
        
	printf("\nCaixas: ");
	if(c1) printf("[X] "); else printf("[1] ");
	if(c2) printf("[X] "); else printf("[2] ");
	if(c3) printf("[X] "); else printf("[3] ");
	if(c4) printf("[X] "); else printf("[4] ");
	if(c5) printf("[X] "); else printf("[5] ");

	printf("\n");

    if(sorteio == 0) {
            
			printf("\nVez do jogador 1 ");
        
		}
    else {
            
			printf("\nVez do jogador 2 ");
			
        }
					
		printf("Escolha uma caixa entre(1-5): ");
        if (scanf("%d", &escolha) != 1) {
            
			system("cls");
    		printf("Opcao invalida! Por favor escolha uma opcao entre 1 - 5.\n\n");
    		printf("Pressione ENTER para retornar ao menu do jogo...");
    		while (getchar() != '\n');
    		getchar();                
    		system("cls");
        }	
						
		if(escolha==1 && c1==1) {
            printf("? Caixa já aberta!\n");
            continue;
        }
        if(escolha==2 && c2==1) {
            printf("? Caixa já aberta!\n");
            continue;
        }
        if(escolha==3 && c3==1) {
            printf("? Caixa já aberta!\n");
            continue;
        }
        if(escolha==4 && c4==1) {
            printf("? Caixa já aberta!\n");
            continue;
        }
        if(escolha==5 && c5==1) {
            printf("? Caixa já aberta!\n");
            continue;
        }	
					
		if(escolha==1) c1 = 1;
        if(escolha==2) c2 = 1;
        if(escolha==3) c3 = 1;
        if(escolha==4) c4 = 1;
        if(escolha==5) c5 = 1;
				
		if(escolha == botao) {
    if(sorteio == 0){
        system("cls");
        printf("\nVITORIA DO JOGADOR 1\n");
    } else {
        system("cls");
        printf("\nVITORIA DO JOGADOR 2\n");
    }
    printf("\nPressione ENTER para sair...");
    getchar();
    getchar();
    break;
}
				
        if(escolha == cobra) {
    if(sorteio == 0){
        system("cls");
        printf("\nDERROTA DO JOGADOR 1\n");
    } else {
        system("cls");
        printf("\nDERROTA DO JOGADOR 2\n");
    }
    printf("\nPressione ENTER para sair...");
    getchar();
    getchar();
    break;
}
    printf("\nCaixa vazia...\n");
    sorteio = !sorteio;
				}		
												
}

// variaveis so pra deixar organizado, eu poderia colocar la encima, mas aqui fica mais facil de ver kkkk	
	
	int daruk_furia = 1;
	int mipha_furia = 1;
	int revali_furia = 1;
	int urbosa_furia = 1;
		
	int daruk_ativo = 1;
	int mipha_ativo = 1;
	int revali_ativo = 1;
	int urbosa_ativo = 1;
	
	void jogow() {
	
    int turno = 1;
    int opcao;

    while (1) {

        system("cls");

        printf("+--------------------------------------------+\n");
        printf("|          A GUERRA COMECA AGORA!           |\n");
        printf("+--------------------------------------------+\n\n");

        printf("        ----CAMPEOES EM COMBATE----\n\n");

        printf("+-----------------------------------------------+\n");
        printf("|       JOGADOR 1       |       JOGADOR 2       |\n");
        printf("|-----------------------+-----------------------|\n");

        printf("| DARUK (1)             | REVALI (1)            |\n");

        if (daruk_ativo)
            printf("| Furia: %-3d            ", daruk_furia);
        else
            printf("| Furia: %-3d [X]        ", daruk_furia);

        if (revali_ativo)
            printf("| Furia: %-3d            |\n", revali_furia);
        else
            printf("| Furia: %-3d [X]        |\n", revali_furia);

        printf("| MIPHA (2)             | URBOSA (2)            |\n");

        if (mipha_ativo)
            printf("| Furia: %-3d            ", mipha_furia);
        else
            printf("| Furia: %-3d [X]        ", mipha_furia);

        if (urbosa_ativo)
            printf("| Furia: %-3d            |\n", urbosa_furia);
        else
            printf("| Furia: %-3d [X]        |\n", urbosa_furia);

        printf("+-----------------------------------------------+\n\n");

        printf("Turno do Jogador %d\n\n", turno);

        printf("Escolha sua acao:\n");
        printf("1 - Atacar\n");
        printf("2 - Dividir\n");
        printf("3 - Sair\n");
        printf("\nFaca sua escolha: ");

        if (scanf("%d", &opcao) != 1) {
            system("cls");
            printf("Opcao invalida!\n\n");
            printf("PRESSIONE ENTER PARA VOLTAR A BATALHA...");
            while (getchar() != '\n');
            getchar();
            continue;
        }

        switch (opcao) {

            case 3:
			system("cls");
    		daruk_furia = 1;
    		mipha_furia = 1;
    		revali_furia = 1;
    		urbosa_furia = 1;
    		daruk_ativo = 1;
    		mipha_ativo = 1;
 			revali_ativo = 1;
    		urbosa_ativo = 1;
    		turno = 1;
			return;

            //parte do ataque pra nao se perder malco
            
            case 1: {

                int atk, alvo;

                printf("\nEscolha quem vai atacar (1 ou 2): ");
                if (scanf("%d", &atk) != 1) {
                    system("cls");
                    printf("Opcao invalida!\n\n");
                    printf("PRESSIONE ENTER PARA VOLTAR A BATALHA...");
                    while (getchar() != '\n');
                    getchar();
                    continue;
                }

                printf("Escolha o alvo (1 ou 2): ");
                if (scanf("%d", &alvo) != 1) {
                    system("cls");
                    printf("Opcao invalida!\n\n");
                    printf("PRESSIONE ENTER PARA VOLTAR A BATALHA...");
                    while (getchar() != '\n');
                    getchar();
                    continue;
                }

                if (turno == 1) {

                    if (atk == 1 && alvo == 1 && daruk_ativo && revali_ativo)
                        revali_furia += daruk_furia;

                    else if (atk == 1 && alvo == 2 && daruk_ativo && urbosa_ativo)
                        urbosa_furia += daruk_furia;

                    else if (atk == 2 && alvo == 1 && mipha_ativo && revali_ativo)
                        revali_furia += mipha_furia;

                    else if (atk == 2 && alvo == 2 && mipha_ativo && urbosa_ativo)
                        urbosa_furia += mipha_furia;

                    else continue;

                } else {

                    if (atk == 1 && alvo == 1 && revali_ativo && daruk_ativo)
                        daruk_furia += revali_furia;

                    else if (atk == 1 && alvo == 2 && revali_ativo && mipha_ativo)
                        mipha_furia += revali_furia;

                    else if (atk == 2 && alvo == 1 && urbosa_ativo && daruk_ativo)
                        daruk_furia += urbosa_furia;

                    else if (atk == 2 && alvo == 2 && urbosa_ativo && mipha_ativo)
                        mipha_furia += urbosa_furia;

                    else continue;
                }

                break;
            }

            //parte da divisao pra nao se perder malco parte 2
            
            case 2: {

                int origem, valor;

                printf("\nQuem vai dividir? (1 ou 2): ");
                if (scanf("%d", &origem) != 1) {
                    system("cls");
                    printf("Opcao invalida!\n\n");
                    printf("PRESSIONE ENTER PARA VOLTAR A BATALHA...");
                    while (getchar() != '\n');
                    getchar();
                    continue;
                }

                printf("Quanto transferir: ");
                if (scanf("%d", &valor) != 1) {
                    system("cls");
                    printf("Opcao invalida!\n\n");
                    printf("PRESSIONE ENTER PARA VOLTAR A BATALHA...");
                    while (getchar() != '\n');
                    getchar();
                    continue;
                }

                if (valor < 1) continue;

                if (turno == 1) {

                    if (origem == 1 && daruk_ativo && daruk_furia % 2 == 0 &&
                        daruk_furia > valor && mipha_furia + valor <= 5) {

                        daruk_furia -= valor;
                        mipha_furia += valor;
                        mipha_ativo = 1;
                    }

                    else if (origem == 2 && mipha_ativo && mipha_furia % 2 == 0 &&
                             mipha_furia > valor && daruk_furia + valor <= 5) {

                        mipha_furia -= valor;
                        daruk_furia += valor;
                        daruk_ativo = 1;
                    }

                    else continue;

                } else {

                    if (origem == 1 && revali_ativo && revali_furia % 2 == 0 &&
                        revali_furia > valor && urbosa_furia + valor <= 5) {

                        revali_furia -= valor;
                        urbosa_furia += valor;
                        urbosa_ativo = 1;
                    }

                    else if (origem == 2 && urbosa_ativo && urbosa_furia % 2 == 0 &&
                             urbosa_furia > valor && revali_furia + valor <= 5) {

                        urbosa_furia -= valor;
                        revali_furia += valor;
                        revali_ativo = 1;
                    }

                    else continue;
                }

                break;
            }

            default:
                continue;
        }

        //condicao pro campeao morrer pra nao se perder malco parte 3
        
        if (daruk_furia > 5) { daruk_furia = 0; daruk_ativo = 0; }
        if (mipha_furia > 5) { mipha_furia = 0; mipha_ativo = 0; }
        if (revali_furia > 5) { revali_furia = 0; revali_ativo = 0; }
        if (urbosa_furia > 5) { urbosa_furia = 0; urbosa_ativo = 0; }

        //tela de vitoria pra nao se perder malco parte 4
        	
        if (!daruk_ativo && !mipha_ativo) {
            system("cls");
			printf("\nVITORIA DO JOGADOR 1!!!!!\n");
            printf("\nPressione ENTER para sair...");
            getchar();
            getchar();
   			daruk_furia = 1;
    		mipha_furia = 1;
    		revali_furia = 1;
    		urbosa_furia = 1;
    		daruk_ativo = 1;
    		mipha_ativo = 1;
    		revali_ativo = 1;
    		urbosa_ativo = 1;
    		turno = 1;
			system("cls");
			break;
        }

        if (!revali_ativo && !urbosa_ativo) {
            system("cls");
			printf("\nVITORIA DO JOGADOR 2!!!!!\n");
            printf("\nPressione ENTER para sair...");
            getchar();
            getchar();
			daruk_furia = 1;
    		mipha_furia = 1;
    		revali_furia = 1;
    		urbosa_furia = 1;
    		daruk_ativo = 1;
    		mipha_ativo = 1;
    		revali_ativo = 1;
    		urbosa_ativo = 1;
    		turno = 1;
			system("cls");
			break;
        }

        if (turno == 1)
            turno = 2;
        else
            turno = 1;
    }
}
