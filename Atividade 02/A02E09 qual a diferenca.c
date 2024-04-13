// OPCIONAL! Os programas resultantes dos dois códigos-fonte abaixo produzem a mesma saída:

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

/* Pense e responda com sinceridade: você acredita que os dois códigos produzem o mesmo programa? Se a
resposta for “não”, qual poderia ser a diferença entre os programas? (Não importa muito a resposta estar
correta, o importante é que você pense nessa questão!) */

// GABARITO

/* Se o compilador estiver gerando programas que sequem à risca o que está
indicado nos códigos, os programas serão diferentes. O primeiro programa
simplesmente mostra o texto "1, 2, 3", enquanto o segundo converte os números 1,
2 e 3 para o texto "1, 2, 3" antes de mostrar. O segundo programa teoricamente
seria então mais lento, mas na verdade a diferença é irrisória e humanamente
imperceptível! */
