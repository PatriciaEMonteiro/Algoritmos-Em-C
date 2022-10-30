/*Considere um algoritmo que vai instanciar um vetor de 4 posições na memoria usando a função calloc()*/

#include <stdio.h>
#include <stdlib.h>

#define QTE 4
#define SAIR exit(1)

int main()
{
    int *px;

    px= (int*)calloc(QTE, sizeof(int));

    if(px == NULL){
        printf("ERRO! Não tem memoria suficiente.");
        SAIR; //finaliza o programa
    }

    int i;

    // Recebe valores inormados pelo usuario
    printf("DIGITAR OS DADOS PARA O VETOR DE 4 POSICOES\n\n");
    for (i=0; i<4; i++){
        printf("Digite px[%d]: ",i);
        scanf("%d", &px[i]);
    }

    printf("\n");

    // Imprime os valores informados
    printf("\nMOSTRAR OS DADOS DO VETOR\n\n");
    for (i=0; i<4; i++){
        printf("Posicao px[%d] = %d\n", i, px[i]);
    }

    printf("\n");

    free(px); //liberar memoria


    system("pause");
    return 0;
}
