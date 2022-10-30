#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

	setlocale(LC_ALL,"Portuguese");

	float txLigacao, tresMinutos, cincoMinutos, acrescimoPorMinuto, valorLigacao;
	int tempo;

	txLigacao = 2.00; //Valor da Liga��o
	tresMinutos = 1.00; //Tempo de liga��o tr�s Minutos
	cincoMinutos = 1.50; //Tempo de liga��o cinco minutos
	acrescimoPorMinuto = 0.25; //Acrescimo por minuto

	printf("\n\t CALCULANDO O VALOR DE UMA LIGA��O INTERNACIONAL! \n");

	printf("\nInforme o tempo de liga��o: \n");
	scanf("%i", &tempo);

	//Para Liga��es at� tr�s minutos
	if (tempo <= 3) {
		valorLigacao = txLigacao + tresMinutos;
		printf("\nSua Liga��o Custou: R$ %.2f\n\n", valorLigacao);
	}

	else {

		//Para Liga��es maiores que tr�s minutos e menores que 5 minutos
		if ((tempo>3) & (tempo<5)) {
			valorLigacao = txLigacao + (tresMinutos + ((tempo-3)*acrescimoPorMinuto));
			printf("\nSua Liga��o Custou: R$ %.2f\n", valorLigacao);
		}

		//Para Liga��es iguais ou maiores que 5 minutos
		else if (tempo >= 5) {

			// Para o caso do tempo da liga��o ser um multiplo de 5
			if (tempo%5==0) {
				valorLigacao = txLigacao + ((tempo/5)*cincoMinutos);
				printf("\nSua Liga��o Custou: R$ %.2f\n", valorLigacao);
			}

			//Quando o tempo da linga��o n�o for multiplo de 5
			else {
				int tempoRestante = (tempo%5);
				valorLigacao = txLigacao + (((tempo/5)*cincoMinutos)+(tempoRestante*acrescimoPorMinuto));
				printf("Sua Liga��o Custou: R$ %.2f\n", valorLigacao);
			}
		}
		//Para erros ao digitar o tempo da liga��o
		else {
			printf("Valor Inv�lido!!\n");
		}

	}


	system("pause");
	return 0;

}
