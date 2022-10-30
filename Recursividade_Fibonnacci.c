//FIBONACCI

#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n)
{
    if (n==0) return 0;
    else if (n==1) return 1;
    else return fibonacci(n-1)+fibonacci(n-2);
}

int main()
{
    int numero;

    printf("\nEntre com um valor para n: ");
    scanf("%d", &numero);
    printf("\nFibonacci e %d \n",fibonacci(numero));

    return 0;
}
