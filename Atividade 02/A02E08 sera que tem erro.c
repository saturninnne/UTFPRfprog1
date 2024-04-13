// OPCIONAL! Compile o código-fonte abaixo e execute o programa resultante:

#include <stdio.h>
int main()
{
    printf ("%d\n", 999999999);
    printf ("%d\n", 9999999999);
    return 0;
}

/* Ocorreu algum problema? Se sim, diga qual foi o problema e formule uma hipótese sobre o que poderia ter
causado o problema. Do contrário, formule uma hipótese sobre o porquê de o código acima poder ser
problemático para algumas pessoas mas não para outras. Em ambos os casos, a sua hipótese não precisa
ser a explicação correta, o importante é pensar nela! */

// GABARITO

/* O código pode ou não apresentar um erro, dependendo do compilador que você
está usando. Mais especificamente, ele não produz erro se o seu compilador tiver
sido compilado para arquiteturas e sistemas operacionais de 64 bits (mas
produzirá erro se o segundo valor for substituído por 9999999999999999999). O
problema é que não é possível representar certos valores com uma quantidade de
bits. O que EXATAMENTE significa isso - e o que causa o erro será estudado em
algumas aulas! */
