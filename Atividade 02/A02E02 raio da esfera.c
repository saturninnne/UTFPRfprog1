/*/ (**) 2. Escreva um programa que calcule e mostre o volume de uma esfera sendo fornecido o valor de seu
raio, r. A fórmula para calcular o volume é: (4/3)·π·r3. Para obter o valor de π, você pode utilizar um valor
chamado M_PI, que está declarado no arquivo math.h. Por exemplo, para r = 3, o volume é 113.097336, e
para r = 15, o volume é 14137.166941. /*/

#include <stdio.h>
#include <math.h>

int main(){

    float raio;
    printf ("Valor do raio: ");
    scanf ("%f", &raio);

    float volume = (4.0/3)*M_PI*(raio*raio*raio);

    printf ("O volume da esfera eh %f", volume);

}



/*/ GABARITO

2. Note que depois do #include <math.h>, M_PI é simplesmente um valor que existe para o nosso programa!

#include <stdio.h>
#include <math.h>

int main ()
{
    float r;
    scanf ("%f", &r);
    printf ("%f", (4.0/3.0)*M_PI*r*r*r);
    return (0);
}

/*/
