/*/ (*) 3. Compile o c�digo-fonte abaixo e execute o programa resultante:
O que acontece? Voc� consegue compreender algum padr�o que n�o foi explicado na aula? /*/

#include <stdio.h>
int main()
{
printf ("%f\n", 3.539);
printf ("%.0f\n", 3.539);
printf ("%.1f\n", 3.539);
printf ("%.2f\n", 3.539);
printf ("%.3f\n", 3.539);
printf ("%.4f\n", 3.539);
printf ("%.5f\n", 3.539);
return 0;
}

/*/ GABARITO /*/

/*/ 3. O programa imprime:
3.539000
4
3.5
3.54
3.539
3.5390
3.53900
Pode-se observar que a sequ�ncia %.xf, onde x � um n�mero inteiro, apresenta na
sa�da um n�mero real arredondado para x casas decimais. /*/
