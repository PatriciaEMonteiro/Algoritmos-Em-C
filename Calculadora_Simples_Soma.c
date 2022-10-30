

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//  Declaração da função
int somaNumerosRU(int vetor[], int numeroDigitos);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int i, numeroDigitos;
    int* vetor;

    printf("\n\t SOMA DIGITOS RU! \n\n");

    //Definindo Tamanho do Vetor
    printf("Informe a quantidade de digitos do seu RU: ");
    scanf_s("%d", &numeroDigitos);

    vetor = (int*)malloc(numeroDigitos * sizeof(int));

    //Recebendo elementos que serão somados
    for (i = 0; i < numeroDigitos; i++) {
        printf("Informe o %dº número do seu RU: ", i + 1);
        scanf_s("%d", &vetor[i]);
    }

    //Chamando a função
    printf("\nA soma dos números do seu RU é = %d\n ", somaNumerosRU(vetor, numeroDigitos - 1));

    return 0;
}

//Função Recursiva
int somaNumerosRU(int vetor[], int numeroDigitos)
{
    if (numeroDigitos == 0) return vetor[numeroDigitos];
    else  return(vetor[numeroDigitos] + somaNumerosRU(vetor, numeroDigitos - 1));  //Chamada da Recursividade
}

