#include <stdio.h>
#include <stdlib.h>

int fatorial(int n)
{
    if(n==0)
       return 1;
    else
       return n * fatorial(n-1);
}

int main()
{
    int numero;

    printf("\nDigite um valor para N:");
    scanf("%d",&numero);

    printf("\nO fatorial de %d e %d /n", numero, fatorial(numero));

    return 0;
}
