#include <stdio.h>
#include <stdlib.h>

int main()
{

    char ch;
    FILE *arquivo;

    //Faz a abertura do arquivo

    do
    {
        scanf("%c",&ch);
        putc(ch,arquivo); //Grava um caractere no arquivo

    }while(ch!='$');

    ch = getc(fp); //Lê um caracter
    while (ch!=EOF)
    {
        putchar(ch);
            ch=getc(fp);
    }


}


