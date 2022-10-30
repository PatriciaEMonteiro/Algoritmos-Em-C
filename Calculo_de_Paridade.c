
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


//Declaração da Função Calculo da Paridade
unsigned int calculaParidade(unsigned char b);

int main() {

    setlocale(LC_ALL, "Portuguese");

    unsigned int digito = ' ';
    int quantidade;
    int i, c;

    printf_s ("\tTESTE DE PARIDADE\n\n");

    printf_s ("Quantos Caracteres Você Deseja Verificar:");
    scanf_s ("%i", &quantidade);
    while ((c = getchar()) != '\n' && c != EOF) {}

    for (i = 0; i < quantidade; i++) {
        //Solicita a entrada do Caracter
        printf_s ("\nDigite um caracter: ");
        scanf_s ("%c", &digito);
        while ((c = getchar()) != '\n' && c != EOF) {}

        printf("O valor decimal na tabela ASCII é: %d\n", (int)digito);
        printf("Sua Paridade é: %d\n", calculaParidade(digito));
    }

    getchar ();
    return 0;
}

//Função Calculo da Paridade
unsigned int calculaParidade(unsigned char b) {
    bool paridade = 0;
    while (b)
    {
        paridade = !paridade;
        b = b & (b - 1);
    }
    return paridade ? 1 : 0;
}
