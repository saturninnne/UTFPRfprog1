/* (**) 6. Escreva um programa que converta um dado número de segundos em dias, horas, minutos e
segundos. Por exemplo, 7322 segundos correspondem a 0 dia, 2 horas, 2 minutos e 2 segundos. */

#include <stdio.h>

int main () {

    // Recebendo os segundos do usuario
    int segundosIniciais, dias, horas, minutos;
    printf ("Digite o numero de segundos: \n");
    scanf ("%d", &segundosIniciais);

    dias = segundosIniciais / (24*3600);
    segundosIniciais = segundosIniciais % (24*3600);

    horas = segundosIniciais / 3600;
    segundosIniciais = segundosIniciais % 3600;

    minutos = segundosIniciais / 60;
    segundosIniciais = segundosIniciais % 60;

    printf("O resultado eh: %d dia(s), %d hora(s), %d minuto(S) e %d segundo(s).", dias, horas, minutos, segundosIniciais);


    return 0;
}

/* GABARITO */
/* Note que as variáveis aqui têm nomes mnemônicos. É fácil entender o que cada
variável representa. Se usássemos coisas como a, b e c, o significado de cada
variável para o programa seria bem menos claro.

#include <stdio.h>

int main () {

    int segundos_total;
    int dias, horas, minutos, segundos;

    scanf ("%d", &segundos_total);

    // 1 dia tem 24 horas, 1 hora tem 60 minutos, 1 minuto tem 60 segundos.
    // Desconta os dias do total de segundos.
    dias = segundos_total / (24 * 60 * 60);
    segundos_total = segundos_total - (dias * 24 * 60 * 60);

    // Desconta as horas dos segundos restantes.
    horas = segundos_total / (60 * 60);
    segundos_total = segundos_total - (horas * 60 * 60);

    // Desconta os minutos dos segundos restantes.
    minutos = segundos_total / 60;
    segundos = segundos_total - (minutos * 60);

    printf ("%d dias, %d horas, %d minutos, %d segundos\n",
    dias, horas, minutos, segundos);
    return (0);
}

*/
