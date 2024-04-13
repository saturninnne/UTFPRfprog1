/*/ (*) 4. Qual será a saída mostrada pelo programa abaixo? (Importante: descubra somente analisando o
código, só execute o programa para conferir o resultado.) /*/

#include <stdio.h>

int main ()
{
    int foo = 10, bar = 5;

    printf ("%d\n", foo + 10); //20
    printf ("%d\n", foo + 10); //20
    printf ("%d\n", foo + 10); //20

    bar = foo + 1;

    printf ("%d\n", foo); //10
    printf ("%d\n", bar); //11
    printf ("%d\n", foo+bar); //21

    foo = foo + 2;
    printf ("%d\n", foo); //12

    return 0;
}


/*/ GABARITO
20
20
20
10
11
21
12
