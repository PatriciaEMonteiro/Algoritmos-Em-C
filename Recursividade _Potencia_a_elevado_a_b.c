#include <stdio.h>
#include <stdlib.h>

float potencia(float base, float expoente)
{

    if (expoente==0) // Se o expoente for igual a 0, a pot�ncia ser� igual a 1.
    {
        return 1;
    }

    if (expoente>0) // Se o expoente for positivo, ent�o a potencia � = base*potencia(base, -expoente)
    {
        return (base*potencia(base, expoente-1));
    }

    if(expoente<0) // Se o expoente for negativo, ent�o a potencia � = 1/potencia(base,-expoente)
    {
        return (1/potencia(base,-expoente));
    }

}

int main()
{
    float a,b,resultado;

    printf("Informe o valor de a: ");
    scanf("%f",&a);
    printf("Informe o valor de b: ");
    scanf("%f",&b);

    resultado=potencia(a,b);
    printf("%.1f elevado a %.1f = %.2f",a,b,resultado);

    return 0;
}
