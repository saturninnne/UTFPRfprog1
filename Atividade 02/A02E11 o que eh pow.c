/* Se voc� j� aprendeu algo sobre programa��o, pode ter aprendido o significado do c�digo abaixo:
pow (x, 3)

Entretanto, na (quase?) totalidade das ocasi�es, seria melhor usar simplesmente x*x*x (C n�o permite
obter o mesmo resultado usando x^3, CUIDADO!). Por qu�? (Se voc� n�o sabe o que significa pow, n�o se
preocupe, n�o precisa responder!). */

// GABARITO

/* x*x*x � mais simples E mais eficiente do que pow (x,3). A chamada a pow
envolve trocas de contexto, e possivelmente convers�es impl�citas de tipos. Voc�
provavelmente n�o vai notar diferen�a nenhuma se usar pow uma, dez, ou mil
vezes. Mas se isso ocorrer milh�es de vezes, a diferen�a pode se tornar
consider�vel. Isso deve ficar mais claro no decorrer da disciplina! */
