#include <stdio.h>

int main()
{
    int Estante[4][4];
    int Contador[6] = {0,0,0,0,0,0};
    char Produtos[6][20] = {"vazio", "Xampu", "Condicionador", "Hidratante", "Tintura", "Demaquilante"};

    //Letra A
    for (int i=0; i<4; i++){
        for (int j=0; j<4; j++){
            scanf("%i", &Estante[i][j]);
        }

    }

    //Letra B
    for (int i=0; i<4; i++){
        for (int j=0; j<4; j++){
            switch (Estante[i][j]){
                case 0 :
                    Contador[0]++;
                    break;
                case 1 :
                    Contador[1]++;
                    break;
                case 2 :
                    Contador[2]++;
                    break;
                case 3 :
                    Contador[3]++;
                    break;
                case 4 :
                    Contador[4]++;
                    break;
                case 5 :
                    Contador[5]++;
                    break;
            }
        }

    }

    for (int i=0; i<6; i++){
        printf("\n");
        puts(Produtos[i]);
        printf("%i", Contador[i]);
    }

}
