/* Se você já aprendeu algo sobre programação, pode ter aprendido o significado do código abaixo:
pow (x, 3)

Entretanto, na (quase?) totalidade das ocasiões, seria melhor usar simplesmente x*x*x (C não permite
obter o mesmo resultado usando x^3, CUIDADO!). Por quê? (Se você não sabe o que significa pow, não se
preocupe, não precisa responder!). */

// GABARITO

/* x*x*x é mais simples E mais eficiente do que pow (x,3). A chamada a pow
envolve trocas de contexto, e possivelmente conversões implícitas de tipos. Você
provavelmente não vai notar diferença nenhuma se usar pow uma, dez, ou mil
vezes. Mas se isso ocorrer milhões de vezes, a diferença pode se tornar
considerável. Isso deve ficar mais claro no decorrer da disciplina! */
