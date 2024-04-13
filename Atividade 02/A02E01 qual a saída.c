/*/ 1. Qual ser� a sa�da mostrada pelo programa abaixo? (Importante: descubra somente analisando o
c�digo, s� execute o programa para conferir o resultado.) /*/

/*/ Se voc� est� prestando aten��o, deve se perguntar agora: os nomes das vari�veis n�o deviam ser
significativos? O que significa foo, bar e foobar? Em programa��o, � normal usar esses nomes em
exemplos, eles s�o como o Fulano, Ciclano e Beltrano da programa��o. Mas, assim como voc� n�o vai
chamar o seu filho de Fulano (nem de Foolano), voc� n�o vai chamar nenhuma vari�vel real nos seus
programas de foo! Estes nomes servem somente para exemplos! (Se quiser saber a origem desses nomes,
pesquise, ou pergunte para os professores em um hor�rio livre.) /*/


#include <stdio.h>
int main ()
{
int foo = 5, bar = 2;
float foobar = 8.0;
printf ("%d\n", foo + 3 * bar);
printf ("%d\n", (foo + 3) * bar);
printf ("%d\n", (foo * bar) / 8);
printf ("%f\n", (foo * bar) / foobar);
printf ("%d\n", foo % 3);
printf ("%d\n", foo % bar);
printf ("%d %d\n", foo * -1, -foo);
printf ("%f\n", foo + 0.1);
printf ("%d\n", foo / bar * bar);
return 0;
}




/*/ GABARITO /*/

/*/1. Note que, quando misturamos valores int e float na conta, o resultado �
float:
11
16
1
1.250000
2
1
-5 -5
5.100000 /*/
