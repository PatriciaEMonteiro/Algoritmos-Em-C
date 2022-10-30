//PRÁTICA 4
// SOMANDO OS ALGARISMOS DO RU

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int somaNumerosRU(int v[], int n) //Função
{
    if (n==0) return v[n];
    else  return(v[n] + somaNumerosRU(v, n-1)); //Recursividade
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int i, n = 7;
    int *v;

    v = (int*)malloc(n*sizeof(int));

    for (i = 0; i < n; i++) {
        printf("Informe o %dº número do seu RU: ", i+1);
        scanf_s("%d", &v[i]);
    }

    printf("A soma dos números do seu RU é = %d\n ", somaNumerosRU(v,n-1));

    return 0;
}
