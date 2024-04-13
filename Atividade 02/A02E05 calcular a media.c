/*/ (**) 5. Escreva um programa em C que recebe 5 números reais, lidos usando a função scanf, e calcule e
mostre a média dos 2 primeiros números, dos 3 primeiros números, dos 4 primeiros números, e dos 5
números. Por exemplo, se os números forem 1, 2, 3, 4 e 5, as médias serão:
1o e 2o – 1.5
1o a 3o – 2
1o a 4o – 2.5
1o a 5o - 3

Importante: o programa deve usar 5 variáveis para os números, e a linha de código para apresentar todas as
médias deve ser sempre:
    printf ("%f\n", media);
, onde media é uma única variável que deve ser reaproveitada para todas as médias. /*/

#include <stdio.h>

int main ()
{
    float primeiro, segundo, terceiro, quarto, quinto;
    printf ("Primeiro: ");
    scanf ("%f, &primeiro");

    printf ("Segundo: ");
    scanf ("%f, &segundo");

    printf ("Terceiro: ");
    scanf ("%f, &terceiro");

    printf ("Quarto: ");
    scanf ("%f, &quarto");

    printf ("Quinto: ");
    scanf ("%f, &quinto");

    float media = (primeiro+segundo)/2.0;
    printf("A media dos dois primeiros numeros eh: %d", media);

    return 0;
}


/*/ GABARITO

#include <stdio.h>
int main () {
    float x1, x2, x3, x4, x5;
    float media;

    scanf ("%f %f %f %f %f", &x1, &x2, &x3, &x4, &x5);

    media = (x1 + x2)/2.0;
    printf ("%f\n", media);
    media = (x1 + x2 + x3)/3.0;
    printf ("%f\n", media);
    media = (x1 + x2 + x3 + x4)/4.0;
    printf ("%f\n", media);
    media = (x1 + x2 + x3 + x4 + x5)/5.0;
    printf ("%f\n", media);
    return 0;
}
