/* (*) 7. Todas as linhas do programa abaixo após a declaração das variáveis e antes do return possuem um
(e somente um) erro no uso da linguagem C (ou seja, não são erros de lógica). Quais são os erros?

Dica:
para começar, tente identificar os erros mais óbvios apenas analisando o código, mas se tiver dúvidas
quanto a alguma estrutura, você pode criar um pequeno programa apenas para testá-la. O erro da última
linha NÃO foi mencionado em aula, você vai precisar testar e pesquisar para descobrir o problema! */

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

    printf ("%f\n", x1 % x2); // % só pode ser utilizado com numeros inteiros
    printf ("%f\n", &x1); //%f é utilizado para imprimir um float, mas para imprimir o conteudo de um endereço de memória deve ser utilizado %p
    x1 = x2 // faltou ; no fim
    printf ("%d\n", x3); // não há nada atribuído à variável x3
    X2 = 10; // o x é maiúsculo
    x1 + 10.0; //uma operação é feita mas o resultado não é armazenado ou exposto
    x3 = 039;

    return 0;
}


/* GABARITO */
/*

printf ("%f\n", x1 % x2); -> Tentando usar o operador % com variáveis float.

printf ("%f\n", &x1); -> Com o & antes de x1, não mostramos o valor de x1.

x1 = x2 -> Faltou o ;

printf ("%d\n", x3); -> x3 não foi inicializada.

X2 = 10; -> X2 não existe. X2 é diferente de x2.

x1 + 10.0; -> Esta linha até pode ser compilada e executada, mas não tem efeito!

x3 = 039; -> NÃO ADICIONE ZEROS à esquerda dos números, a não ser que você
queria usar números octais (e se você não sabe o que é um número octal, não quer
usar um!). Além disso, o dígito 9 não poderia ser usado em um número octal.

*/
