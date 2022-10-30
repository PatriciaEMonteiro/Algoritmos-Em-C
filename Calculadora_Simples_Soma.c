

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//  Declara��o da fun��o
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

    //Recebendo elementos que ser�o somados
    for (i = 0; i < numeroDigitos; i++) {
        printf("Informe o %d� n�mero do seu RU: ", i + 1);
        scanf_s("%d", &vetor[i]);
    }

    //Chamando a fun��o
    printf("\nA soma dos n�meros do seu RU � = %d\n ", somaNumerosRU(vetor, numeroDigitos - 1));

    return 0;
}

//Fun��o Recursiva
int somaNumerosRU(int vetor[], int numeroDigitos)
{
    if (numeroDigitos == 0) return vetor[numeroDigitos];
    else  return(vetor[numeroDigitos] + somaNumerosRU(vetor, numeroDigitos - 1));  //Chamada da Recursividade
}

