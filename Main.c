#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>


char MenuIntroducaoCadastroDaGuilda(){
	printf(
		"Ola aventureiro, antes de iniciar sua aventura\n"
		"Preencha seu cadastro na Guilda dos Aventureiros:\n"
		"Como podemos te chamar?\n\n"
		);
}
void MenuIntroducaoDaHistoria(){
	printf(
		"Seja bem vindo a New Town, no continente de Minstorn!\n"
		"Apos assinar o contrato para realizacao de servicos da Guilda\n"
		"Seu proposito nestas terras longiquas e de encontrar\n"
		"As cinco valiosas reliquias perdidas durante a terrivel\n"
		"Grande Guerra, que findou apos mais de uma decada de conflitos.\n\n"
		"Boa sorte aventureiro, e que os deuses lhe guiem em sua jornada!\n\n"
		);
}
void MenuEscolhaDaClasse(void){
	printf(
		"A qual classe voce pertence?\n\n"
		"1 - Guerreiro, o Quebra-tudo\n"
		"2 - Mago, o Implacavel\n"
		"3 - Ladino, o Trombadinha\n\n"
		);					
}
void Guerreiro(){
	printf(
		"Voce e um Guerreiro!\n"
		"Seus atributos sao:\n"
		"Forca:			15 pontos\n"
		"Destreza:		5 pontos\n"
		"Inteligencia:		5 pontos\n"
		"Vitalidade:		10 pontos\n");	
}
void Mago(){
	printf(
		"Voce e um Mago!\n"
		"Seus atributos sao:\n"
		"Forca:			5 pontos\n"
		"Destreza:		5 pontos\n"
		"Inteligencia:		15 pontos\n"
		"Vitalidade:		10 pontos\n");	
}
void Ladino(){
	printf(
		"Voce e um Ladino!\n"
		"Seus atributos sao:\n"
		"Forca:			5 pontos\n"
		"Destreza:		15 pontos\n"
		"Inteligencia:		5 pontos\n"
		"Vitalidade:		10 pontos\n");	
}
int EscolhaDaClasse(int escolha){
	int classe = escolha;
	switch(classe){
		case 1: Guerreiro();	break;
		case 2: Mago();			break;
		case 3: Ladino();		break;
		default:	
			printf("Escolha uma classe valida!\n");
			scanf("%d", &classe);
			EscolhaDaClasse(classe);
	}
	return classe;
} 

struct ESTRUTURADOPERSONAGEM{
	char nome[61];
} NovoPersonagem;



int main() {
	MenuIntroducaoCadastroDaGuilda();
	fgets(NovoPersonagem.nome, 61, stdin);
	printf("Ola %s\n", NovoPersonagem.nome);
	
	MenuIntroducaoDaHistoria();
	MenuEscolhaDaClasse();
	int escolha = 0;
	scanf("%d", &escolha);
	EscolhaDaClasse(escolha);
}


