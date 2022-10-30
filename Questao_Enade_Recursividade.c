#include <stdio.h>

int rec (int vetor[], int n)
{
    if(n==0) {
        return 0;
    }

    else {
        int acc;
        acc = rec(vetor, n-1);
        if(vetor[n-1]%2 == 0){
            acc+=vetor[n-1];
        }
        return acc;
    }
}

int main()
{
    int vetor[5] = {2,-3,-1,6,-4};
    printf(" %d", rec(vetor, 5));

    return 0;

}
