#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

	setlocale(LC_ALL,"Portuguese");

	float txLigacao, tresMinutos, cincoMinutos, acrescimoPorMinuto, valorLigacao;
	int tempo;

	txLigacao = 2.00; //Valor da Ligação
	tresMinutos = 1.00; //Tempo de ligação três Minutos
	cincoMinutos = 1.50; //Tempo de ligação cinco minutos
	acrescimoPorMinuto = 0.25; //Acrescimo por minuto

	printf("\n\t CALCULANDO O VALOR DE UMA LIGAÇÃO INTERNACIONAL! \n");

	printf("\nInforme o tempo de ligação: \n");
	scanf("%i", &tempo);

	//Para Ligações até três minutos
	if (tempo <= 3) {
		valorLigacao = txLigacao + tresMinutos;
		printf("\nSua Ligação Custou: R$ %.2f\n\n", valorLigacao);
	}

	else {

		//Para Ligações maiores que três minutos e menores que 5 minutos
		if ((tempo>3) & (tempo<5)) {
			valorLigacao = txLigacao + (tresMinutos + ((tempo-3)*acrescimoPorMinuto));
			printf("\nSua Ligação Custou: R$ %.2f\n", valorLigacao);
		}

		//Para Ligações iguais ou maiores que 5 minutos
		else if (tempo >= 5) {

			// Para o caso do tempo da ligação ser um multiplo de 5
			if (tempo%5==0) {
				valorLigacao = txLigacao + ((tempo/5)*cincoMinutos);
				printf("\nSua Ligação Custou: R$ %.2f\n", valorLigacao);
			}

			//Quando o tempo da lingação não for multiplo de 5
			else {
				int tempoRestante = (tempo%5);
				valorLigacao = txLigacao + (((tempo/5)*cincoMinutos)+(tempoRestante*acrescimoPorMinuto));
				printf("Sua Ligação Custou: R$ %.2f\n", valorLigacao);
			}
		}
		//Para erros ao digitar o tempo da ligação
		else {
			printf("Valor Inválido!!\n");
		}

	}


	system("pause");
	return 0;

}
