#include <stdio.h>
#include "BibliotecaViana.c"
 
int opcao, opcao1,assentos, i=0, valor=0, j=0;
int vagaoExecutivo[5]={45,45,45,45,45}, vagaoEconomico[5]={45,45,45,45,45};
int vagao1=45, vagao2=45, vagao3=45, vagao4=45, vagao5=45, vagao6=45, vagao7=45, vagao8=45, vagao9=45, vagao10=45;
char nome[300][300];
int passagemExecutiva=0, passagemEconomica=0;
float pagamento=0.0, dinheiroExecutiva=0.0, dinheiroEconomica=0.0;
float executiva=58.0, economica=35.0, cartaoExecutiva=56.25, cartaoEconomica=33.25, totalDinheiro=0.0;
 
void pagamentoExecutiva();
void pagamentoEconomica();
 
void menuPrincipal(){
	int i, j;
 
		gotoxy(1,1); printf("%c", 218);
		gotoxy(2,1); printf("%c", 179);
		gotoxy(3,1); printf("%c", 195);
 
		for(j=2;j<70; j++){
				gotoxy(1,j);printf("%c", 196);
				gotoxy(3,j);printf("%c", 196);
		}	
 
		gotoxy(1,70); printf("%c", 191);
		gotoxy(2,70); printf("%c", 179);
		gotoxy(3,70); printf("%c", 180);
 
 
		gotoxy(3,34); printf("%c", 194);
 
 
		gotoxy(2,33);printf("MENU");
 
		printf("\n\n");
 
		gotoxy(4,1); printf("%c", 195);
		gotoxy(5,1); printf("%c", 179);
		gotoxy(6,1); printf("%c", 195);
 
		for(j=2;j<70; j++){
				gotoxy(4,j);printf("%c", 196);
				gotoxy(6,j);printf("%c", 196);
		}	
			gotoxy(4,15);printf("C%cDIGO",224);
		gotoxy(4,51);;printf("OPC%cO",199,224);
		gotoxy(4,70); printf("%c", 180);
		gotoxy(5,70); printf("%c", 179);
		gotoxy(6,70); printf("%c", 180);
 
		gotoxy(4,34);printf("%c",197);
		gotoxy(5,34);printf("%c",179);
		gotoxy(6,34);printf("%c",197);
 
		gotoxy(5,17);printf("1");
 
		gotoxy(5,50);printf("Comprar", 186);
 
		gotoxy(7,1); printf("%c", 195);
		gotoxy(8,1); printf("%c", 179);
		gotoxy(9,1); printf("%c", 195);
 
		for(j=2;j<70; j++){
				gotoxy(7,j);printf("%c", 196);
				gotoxy(9,j);printf("%c", 196);
		}	
 
		gotoxy(7,70); printf("%c", 180);
		gotoxy(8,70); printf("%c", 179);
		gotoxy(9,70); printf("%c", 217);
 
		gotoxy(7,34);printf("%c",197);
		gotoxy(8,34);printf("%c",179);
		gotoxy(9,34);printf("%c",193);
 
		gotoxy(8,17);printf("2");
 
		gotoxy(8,48);printf("Visualizar", 186);
 
		gotoxy(13,1); printf("%c", 218);
		gotoxy(14,1); printf("%c", 179);
		gotoxy(15,1); printf("%c", 192);
 
		for(j=2;j<23; j++){
				gotoxy(13,j);printf("%c", 196);
				gotoxy(15,j);printf("%c", 196);
		}	
		gotoxy(13,23); printf("%c", 191);
		gotoxy(14,23); printf("%c", 179);
		gotoxy(15,23); printf("%c", 217);
 
		gotoxy(13,19);printf("%c",194);
		gotoxy(14,19);printf("%c",179);
		gotoxy(15,19);printf("%c",193);
 
		gotoxy(14,2);printf("Digite o C%cDIGO: ", 224);
 
		gotoxy(13,1); printf("%c", 218);
		gotoxy(14,1); printf("%c", 179);
		gotoxy(15,1); printf("%c", 192);
 
		for(j=2;j<70; j++){
				gotoxy(9,j);printf("%c", 196);
				gotoxy(11,j);printf("%c", 196);
		}	
 
		gotoxy(9,34);printf("%c",197);
		gotoxy(10,34);printf("%c",179);
		gotoxy(11,34);printf("%c",193);
 
		gotoxy(9,70); printf("%c", 180);
		gotoxy(10,70); printf("%c", 179);
		gotoxy(11,70); printf("%c", 217);
		gotoxy(10,1); printf("%c", 179);
 
		gotoxy(11,1); printf("%c", 192);
 
		gotoxy(10,17);printf("3");
 
		gotoxy(10,51);printf("SAIR"); 
}
 
void menuCompras(){
	int i,j;
	gotoxy(1,1); printf("%c", 218);
		gotoxy(2,1); printf("%c", 179);
		gotoxy(3,1); printf("%c", 195);
 
		for(j=2;j<70; j++){
				gotoxy(1,j);printf("%c", 196);
				gotoxy(3,j);printf("%c", 196);
		}	
 
		gotoxy(1,70); printf("%c", 191);
		gotoxy(2,70); printf("%c", 179);
		gotoxy(3,70); printf("%c", 180);
 
		gotoxy(3,34); printf("%c", 194);
 
		gotoxy(2,17);printf("Escolha um tipo de passagem para comprar");
 
		printf("\n\n");
 
		gotoxy(4,1); printf("%c", 195);
		gotoxy(5,1); printf("%c", 179);
		gotoxy(6,1); printf("%c", 195);
 
		for(j=2;j<70; j++){
				gotoxy(4,j);printf("%c", 196);
				gotoxy(6,j);printf("%c", 196);
		}	
		gotoxy(4,15);printf("C%cDIGO",224);
		gotoxy(4,51);;printf("OPC%cO",199,224);
		gotoxy(4,70); printf("%c", 180);
		gotoxy(5,70); printf("%c", 179);
		gotoxy(6,70); printf("%c", 180);
 
		gotoxy(4,34);printf("%c",197);
		gotoxy(5,34);printf("%c",179);
		gotoxy(6,34);printf("%c",197);
 
		gotoxy(5,17);printf("1");
 
		gotoxy(5,43);printf("Passagem Executivo", 186);
 
		gotoxy(7,1); printf("%c", 195);
		gotoxy(8,1); printf("%c", 179);
		gotoxy(9,1); printf("%c", 192);
 
		for(j=2;j<70; j++){
				gotoxy(7,j);printf("%c", 196);
				gotoxy(9,j);printf("%c", 196);
		}	
 
		gotoxy(7,70); printf("%c", 180);
		gotoxy(8,70); printf("%c", 179);
		gotoxy(9,70); printf("%c", 217);
 
		gotoxy(7,34);printf("%c",197);
		gotoxy(8,34);printf("%c",179);
		gotoxy(9,34);printf("%c",193);
 
		gotoxy(8,17);printf("2");
 
		gotoxy(8,43);printf("Passagem Economica", 186);
 
		gotoxy(10,1); printf("%c", 218);
		gotoxy(11,1); printf("%c", 179);
		gotoxy(12,1); printf("%c", 192);
 
		for(j=2;j<23; j++){
				gotoxy(10,j);printf("%c", 196);
				gotoxy(12,j);printf("%c", 196);
		}	
		gotoxy(10,23); printf("%c", 191);
		gotoxy(11,23); printf("%c", 179);
		gotoxy(12,23); printf("%c", 217);
 
		gotoxy(10,19);printf("%c",194);
		gotoxy(11,19);printf("%c",179);
		gotoxy(12,19);printf("%c",193);
 
		gotoxy(11,2);printf("Digite o C%cDIGO: ", 224);
}
 
void menuVisualizar(){
	int j, i,q=0;
	gotoxy(1,1); printf("%c", 218);
	gotoxy(2,1); printf("%c", 179);
	gotoxy(3,1); printf("%c", 195);
 
	for(j=2;j<50; j++){
			gotoxy(1,j);printf("%c", 196);
			gotoxy(3,j);printf("%c", 196);
			gotoxy(4,j);printf("%c", 196);
			gotoxy(15,j);printf("%c", 196);
	}	
 
	gotoxy(1,50); printf("%c", 191);
	gotoxy(2,50); printf("%c", 179);
	gotoxy(3,50); printf("%c", 180);
 
 	gotoxy(2,18);printf("Visualizar Vagas");
	gotoxy(4,1); printf("%c", 195);
 
	gotoxy(7,1); printf("%c", 195);
	for(i=5; i<15;i++){
			gotoxy(i,1); printf("%c", 179);
			gotoxy(i,50); printf("%c", 179);
	}
 
	gotoxy(4,21);printf("Informacoes");	
 
	gotoxy(4,50); printf("%c", 180);
 
	gotoxy(15,1);printf("%c", 192);
	gotoxy(15,50);printf("%c", 217);
}
 
int main(){
 
	do{
		menuPrincipal();
 
		gotoxy(14,21);scanf("%i", &opcao);
		switch (opcao){
			case 1: 
				system("cls");
				menuCompras(); 
				gotoxy(11,21); printf("  "); 
				gotoxy(11,21); scanf("%i", &opcao1);
				gotoxy(15,1);
 
				if(opcao1==1){
					fflush(stdin);
					printf("Qual seu nome? ");
					scanf("%[^\n]s", &nome);
 
					printf("Quantas passagens voce quer reservar? ");
					scanf("%i", &assentos);
 
 					if(assentos<=vagaoExecutivo[0]){
 						vagao1 = vagaoExecutivo[0] - assentos;
 						vagaoExecutivo[0] = vagao1;
 						passagemExecutiva += assentos;
 						printf("\nSucesso!");
  						pagamentoExecutiva();
 						printf("\n%i passsagens restantes no vagao 1 executivo", vagao1);
					 } else if (assentos<=vagaoExecutivo[1]){
 						vagao2 = vagaoExecutivo[1] - assentos;
 						vagaoExecutivo[1] = vagao2;
 						passagemExecutiva += assentos;
 						printf("\nSucesso!");
 						pagamentoExecutiva();
 						printf("\n%i passsagens restantes no vagao 2 executivo", vagao2);
					 } else if (assentos<=vagaoExecutivo[2]){
 						vagao3 = vagaoExecutivo[2] - assentos;
 						passagemExecutiva += assentos;
 						vagaoExecutivo[2] = vagao3;
 						printf("\nSucesso!");
 						pagamentoExecutiva();
 						printf("\n%i passsagens restantes no vagao 3 executivo", vagao3);
					 } else if (assentos<=vagaoExecutivo[3]){
 						vagao4 = vagaoExecutivo[3] - assentos;
 						passagemExecutiva += assentos;
 						vagaoExecutivo[3] = vagao4;
 						printf("\nSucesso!");
 						pagamentoExecutiva();
 						printf("\n%i passsagens restantes no vagao 4 executivo", vagao4);
					 } else if (assentos<=vagaoExecutivo[4]){
 						vagao5 = vagaoExecutivo[4] - assentos;
 						vagaoExecutivo[4] = vagao5;
 						passagemExecutiva += assentos;
 						printf("\nSucesso!");
 						pagamentoExecutiva();
 						printf("\n%i passagens restantes no vagao 5 executivo", vagao5);
					 } else{
					 	printf("Sem vagas na classe executiva!");
					 	printf("\nVagas restantes: %i", vagaoExecutivo[4]);
					 }
 
 						printf("\n\nTotal Executiva: %i", passagemExecutiva);
 
 					printf("\n\n\n");
					system("pause");
 
				}
 
				if(opcao1==2){
 
					fflush(stdin);
					printf("Qual seu nome? ");
					scanf("%[^\n]s", &nome);
 
					printf("Quantas passagens voce quer reservar? ");
					scanf("%i", &assentos);
 
 					if(assentos<=vagaoEconomico[0]){
 						vagao6 = vagaoEconomico[0] - assentos;
 						vagaoEconomico[0] = vagao6;
 						passagemEconomica += assentos;
 						printf("\nSucesso!");
  						pagamentoEconomica();
 						printf("\n%i passsagens restantes no vagao 1 economico", vagao6);
					 } else if (assentos<=vagaoEconomico[1]){
 						vagao7 = vagaoEconomico[1] - assentos;
 						vagaoEconomico[1] = vagao7;
 						passagemEconomica += assentos;
 						printf("\nSucesso!");
 						pagamentoEconomica();
 						printf("\n%i passsagens restantes no vagao 2 economico", vagao7);
					 } else if (assentos<=vagaoEconomico[2]){
 						vagao8 = vagaoEconomico[2] - assentos;
 						passagemEconomica += assentos;
 						vagaoEconomico[2] = vagao8;
 						printf("\nSucesso!");
 						pagamentoEconomica();
 						printf("\n%i passsagens restantes no vagao 3 economico", vagao8);
					 } else if (assentos<=vagaoEconomico[3]){
 						vagao9 = vagaoEconomico[3] - assentos;
 						passagemEconomica += assentos;
 						vagaoEconomico[3] = vagao9;
 						printf("\nSucesso!");
 						pagamentoEconomica();
 						printf("\n%i passsagens restantes no vagao 4 economico", vagao9);
					 } else if (assentos<=vagaoEconomico[4]){
 						vagao10 = vagaoEconomico[4] - assentos;
 						vagaoExecutivo[4] = vagao10;
 						passagemEconomica += assentos;
 						printf("\nSucesso!");
 						pagamentoEconomica();
 						printf("\n%i passagens restantes no vagao 5 economico", vagao10);
					 } else{
					 	printf("Sem vagas na classe economica!");
					 	printf("\nVagas restantes: %i", vagaoEconomico[4]);
					 }
 
 						printf("\n\nTotal Economica: %i", passagemEconomica);
				}
			system("pause");
			break;
 
			case 2: 
			system("cls"); 
			menuVisualizar(); 
 
			for(i=0; i<5;i++){
				gotoxy(i+10,2);printf("%i- Vagao Economico- %i/45", i+6,vagaoEconomico[i]);
				gotoxy(i+5,2);printf("%i- Vagao Executivo- %i/45\n",i+1,vagaoExecutivo[i]);
 
			}
 
			gotoxy(30,1); system("pause"); break;
 
			default:
				break;
		}
		system("cls");
	} while (opcao !=3);
 
	printf("VOCE SAIU DO PROGRAMA :(");
 
	printf("\n\n");
}
 
void pagamentoExecutiva(){
	float dinheiroEx=0.0;
 
	tentarNovamente:
 	printf("\nDinheiro (opcao 1) ou cartao (opcao 2 - 1,75 de desconto)?");
 	scanf("%f", &pagamento);
 
 	if(pagamento == 1){
	 	dinheiroEx = assentos*executiva;
 
	 	pagar:
	 	printf("\nTotal a pagar: %.2f", dinheiroEx);						
	 	printf("\nCom qual valor deseja pagar?");
	 	scanf("%f", &dinheiroExecutiva);
 
		if(dinheiroExecutiva > dinheiroEx){
			printf("\nTroco: %.2f", dinheiroExecutiva - dinheiroEx);
		} else {
			printf("\nDinheiro insuficiente");
			goto pagar;
		}							 	
 
	} else if (pagamento == 2){
			printf("\nTotal a pagar: %.2f", (assentos*cartaoExecutiva));
			printf("\nTransacao aprovada!");
	} else {
			printf("\nOpcao invalida. Tente novamente!");
			goto tentarNovamente;
	}
}
 
void pagamentoEconomica(){
	float dinheiroEco=0.0;
	int pagamento2=0;
 
	tentarNovamente2:
 	printf("\nDinheiro (opcao 1) ou cartao (opcao 2 - 1,75 de desconto)?");
 	scanf("%i", &pagamento2);
 
 	if(pagamento2 == 1){
	 	dinheiroEco = assentos*economica;
 
	 	pagar2:
	 	printf("\nTotal a pagar: %.2f", dinheiroEco);						
	 	printf("\nCom qual valor deseja pagar?");
	 	scanf("%f", &dinheiroEconomica);
 
		 printf("\n\nVALOR A PAGAR: %.2f", dinheiroEco);
		 printf("\nPAGAR COM: %.2f", dinheiroEconomica);
 
		if(dinheiroEco < dinheiroEconomica){
			printf("\nTroco: %.2f", dinheiroEconomica - dinheiroEco);
		} else {
			printf("\nDinheiro insuficiente");
			goto pagar2;
		}							 	
 
	} else if (pagamento2 == 2){
			printf("\nTotal a pagar: %.2f", (assentos*cartaoEconomica));
			printf("\nTransacao aprovada!");
	} else {
			printf("\nOpcao invalida. Tente novamente!");
			goto tentarNovamente2;
	}
}
