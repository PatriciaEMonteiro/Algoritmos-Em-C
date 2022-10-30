
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define MAX 60

int main()
{

	setlocale(LC_ALL, "Portuguese");

	//Declara��o de Ponteiros
	char* ponteiroFrase[MAX];
	char* ponteiroFraseCodificada[MAX];

	//Declara��o de Vetores
	char frase[MAX];
	char fraseCodificada[MAX];

	//Apontando o Ponteiro para o vetor
	ponteiroFrase[MAX] = &frase[MAX];
	ponteiroFraseCodificada[MAX] = &fraseCodificada[MAX];

	printf("\n\tSISTEMA DE CODIFICA��O!\n ");

	//Recebendo a Frase
	printf("\nDigite a frase a ser c�dificada:\n ");
	gets_s(frase);

	//La�o para codifica��o de frases
	int i;
	for (i = 0; i < MAX; i++) {

		//Substituindo vogais por numero
		if (frase[i] == 'A' || frase[i] == 'a') fraseCodificada[i] = '2';
		else if (frase[i] == 'E' || frase[i] == 'e') fraseCodificada[i] = '3';
		else if (frase[i] == 'I' || frase[i] == 'i') fraseCodificada[i] = '4';
		else if (frase[i] == 'O' || frase[i] == 'o') fraseCodificada[i] = '5';
		else if (frase[i] == 'U' || frase[i] == 'u') fraseCodificada[i] = '6';

		//Susbtituindo numeros por vogais
		else if (frase[i] == '2') fraseCodificada[i] = 'A';
		else if (frase[i] == '3') fraseCodificada[i] = 'E';
		else if (frase[i] == '4') fraseCodificada[i] = 'I';
		else if (frase[i] == '5') fraseCodificada[i] = 'O';
		else if (frase[i] == '6') fraseCodificada[i] = 'U';

		else fraseCodificada[i] = frase[i];
	}


	//Impress�o das Frases
	printf_s(" \nA frase Codificada �: \n %s\n\n", fraseCodificada);

	system("pause");
	return 0;

}
