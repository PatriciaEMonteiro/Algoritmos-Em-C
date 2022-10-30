
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <errno.h>
#include <ctime>

typedef int errno_t;

void salvarJogos(int numJogos, int jogos[20][6]);

int main() {

    srand(time(NULL));
    setlocale(LC_ALL, "Portuguese");

    int numJogos, jogos[20][6];
    int saida[20][6];
    char sArquivo, c;

    printf("\n\tJOGOS DA MEGA-SENA\n");

    // Solicita numeros de jogos a Serem Jogados
    printf("\nQuantos Jogos Você Deseja (De 1 á 20): ");
    scanf_s("%i", &numJogos);
    while ((c = getchar()) != '\n' && c != EOF) {}

    if (numJogos <= 20) {

        // Criando jogos
        for (int i = 0; i < numJogos; i++) {
            for (int j = 0; j < 6; ++j) {
                jogos[i][j] = rand() % 100;

                //Removendo números repetidos
                for (int k = j + 1; k < numJogos; k++) {
                    if (jogos[i][k] == jogos[i][j]) {
                        jogos[i][j] = rand() % 100;
                    }
                }
            }
        }

        // Imprimindo jogos
        for (int i = 0; i < numJogos; i++) {
            for (int j = 0; j < 6; ++j) {
                printf(" %d; ", jogos[i][j]);
            }
            printf("\n");
        }

        // Verifica se  usuario deseja salvar o arquivo.
        printf("\nVocê Deseja salvar os jogos em um arquivo? (s/n) \n");
        fgets(&sArquivo, 4, stdin);

        // Cria o Arquivo
        if (sArquivo == 's' || sArquivo == 'S')  salvarJogos(numJogos, jogos);
        else if (sArquivo == 'n' || sArquivo == 'N')   printf("Arquivo não foi criado!\n");
        else printf("Opção Inválida!\n");

    }

    else {
        printf("Você só pode gerar até 20 jogos!\n");
    }


    system("pause");
    return 0;
}

void salvarJogos(int numJogos, int jogos[20][6]) {

    FILE* arquivo;
    errno_t err;

    err = fopen_s(&arquivo, "3605137.csv", "w+");

    if (err == 0) printf("\nArquivo Criado!\n\n");

    for (int i = 0; i < numJogos; i++) {
        for (int j = 0; j < 6; j++) {
            fprintf(arquivo, " %d; ", jogos[i][j]);
        }
        fprintf(arquivo, "\n");
    }
    //Fechamento de arquivo
    if (&arquivo) err = fclose(arquivo);
    else printf("\nArquivo NÂO foi Criado!\n\n");
}
