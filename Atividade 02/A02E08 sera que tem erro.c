// OPCIONAL! Compile o c�digo-fonte abaixo e execute o programa resultante:

#include <stdio.h>
int main()
{
    printf ("%d\n", 999999999);
    printf ("%d\n", 9999999999);
    return 0;
}

/* Ocorreu algum problema? Se sim, diga qual foi o problema e formule uma hip�tese sobre o que poderia ter
causado o problema. Do contr�rio, formule uma hip�tese sobre o porqu� de o c�digo acima poder ser
problem�tico para algumas pessoas mas n�o para outras. Em ambos os casos, a sua hip�tese n�o precisa
ser a explica��o correta, o importante � pensar nela! */

// GABARITO

/* O c�digo pode ou n�o apresentar um erro, dependendo do compilador que voc�
est� usando. Mais especificamente, ele n�o produz erro se o seu compilador tiver
sido compilado para arquiteturas e sistemas operacionais de 64 bits (mas
produzir� erro se o segundo valor for substitu�do por 9999999999999999999). O
problema � que n�o � poss�vel representar certos valores com uma quantidade de
bits. O que EXATAMENTE significa isso - e o que causa o erro ser� estudado em
algumas aulas! */
