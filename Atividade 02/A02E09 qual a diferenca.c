// OPCIONAL! Os programas resultantes dos dois c�digos-fonte abaixo produzem a mesma sa�da:

#include <stdio.h>
int main()
{
    printf ("1, 2, 3\n");
    return 0;
}

// e

#include <stdio.h>
int main()
{
    printf ("%d, %d, %d\n", 1, 2, 3);
    return 0;
}

/* Pense e responda com sinceridade: voc� acredita que os dois c�digos produzem o mesmo programa? Se a
resposta for �n�o�, qual poderia ser a diferen�a entre os programas? (N�o importa muito a resposta estar
correta, o importante � que voc� pense nessa quest�o!) */

// GABARITO

/* Se o compilador estiver gerando programas que sequem � risca o que est�
indicado nos c�digos, os programas ser�o diferentes. O primeiro programa
simplesmente mostra o texto "1, 2, 3", enquanto o segundo converte os n�meros 1,
2 e 3 para o texto "1, 2, 3" antes de mostrar. O segundo programa teoricamente
seria ent�o mais lento, mas na verdade a diferen�a � irris�ria e humanamente
impercept�vel! */
