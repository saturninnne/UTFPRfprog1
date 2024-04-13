/* (*) 7. Todas as linhas do programa abaixo ap�s a declara��o das vari�veis e antes do return possuem um
(e somente um) erro no uso da linguagem C (ou seja, n�o s�o erros de l�gica). Quais s�o os erros?

Dica:
para come�ar, tente identificar os erros mais �bvios apenas analisando o c�digo, mas se tiver d�vidas
quanto a alguma estrutura, voc� pode criar um pequeno programa apenas para test�-la. O erro da �ltima
linha N�O foi mencionado em aula, voc� vai precisar testar e pesquisar para descobrir o problema! */

/*
#include <stdio.h>

int main ()
{

    float x1 = 5.0, x2 = 2.0;
    int x3;

    printf ("%f\n", x1 % x2);
    printf ("%f\n", &x1);
    x1 = x2
    printf ("%d\n", x3);
    X2 = 10;
    x1 + 10.0;
    x3 = 039;

    return 0;
}

*/


#include <stdio.h>
int main () {
    float x1 = 5.0, x2 = 2.0;
    int x3;

    printf ("%f\n", x1 % x2); // % s� pode ser utilizado com numeros inteiros
    printf ("%f\n", &x1); //%f � utilizado para imprimir um float, mas para imprimir o conteudo de um endere�o de mem�ria deve ser utilizado %p
    x1 = x2 // faltou ; no fim
    printf ("%d\n", x3); // n�o h� nada atribu�do � vari�vel x3
    X2 = 10; // o x � mai�sculo
    x1 + 10.0; //uma opera��o � feita mas o resultado n�o � armazenado ou exposto
    x3 = 039;

    return 0;
}


/* GABARITO */
/*

printf ("%f\n", x1 % x2); -> Tentando usar o operador % com vari�veis float.

printf ("%f\n", &x1); -> Com o & antes de x1, n�o mostramos o valor de x1.

x1 = x2 -> Faltou o ;

printf ("%d\n", x3); -> x3 n�o foi inicializada.

X2 = 10; -> X2 n�o existe. X2 � diferente de x2.

x1 + 10.0; -> Esta linha at� pode ser compilada e executada, mas n�o tem efeito!

x3 = 039; -> N�O ADICIONE ZEROS � esquerda dos n�meros, a n�o ser que voc�
queria usar n�meros octais (e se voc� n�o sabe o que � um n�mero octal, n�o quer
usar um!). Al�m disso, o d�gito 9 n�o poderia ser usado em um n�mero octal.

*/
