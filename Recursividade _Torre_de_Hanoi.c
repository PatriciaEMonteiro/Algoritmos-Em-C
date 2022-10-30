#include <stdio.h>
#include <stdlib.h>

int tHanoi (int disco,char de, char para, char aux)
{
     if(disco==1)
    {
        printf("\nMover disco %d da torre %c para a torre %c.",disco,de,para);
    }
    else
    {
        tHanoi(disco-1, de, aux, para);
        printf("\nMover disco %d da torre %c para a torre %c.",disco, de, para);
        tHanoi(disco-1, aux, para, de);
    }

    return 0;
}

int main()
{
    int numero;

    printf("Informe a quantidade de discos para Torre A:");
    scanf("%d", &numero);

    tHanoi(numero, 'A','B','C');

    return 0;
}
