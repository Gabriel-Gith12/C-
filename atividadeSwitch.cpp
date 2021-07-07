/// Implemente um sistema que leia 2(dois) valores utilizando Switch
/// Entrada:
/// Valor A : XX
/// Valor B : XX
/// Qual a operacao que voce deseja executar?
/// Digite:
/// 1 - Soma = +
/// 2 - Subtracao = -
/// 3 - Divisao = /
/// 4 - Multiplicacao = *
/// O resultado de ValorA:: XX(operacao ou sinal) ValorB:: = XXX

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){    /// executa e motra na tela

    float valorA, valorB, resultado;
    int operacao;
    

    printf("Digite o valor A \n");
    scanf("%f", &valorB);
    
    printf("Digite o valor B \n");
    scanf("%f", &valorA);
    
    printf("Qual a operacao que voce deseja executar? \n 1 - Soma \n 2 - Subtracao \n 3 - Multiplicacao \n 4 - Divisao \n " );
    scanf("%d",&operacao);
    
    switch(operacao){
    case 1:
        resultado = valorA + valorB;
        printf("Resultado da Soma eh :%2.f \n", resultado);
        break;

        case 2:
        resultado = valorA - valorB;
        printf("Resultado da Subtracao eh : %2.f \n", resultado);
         break;

        case 3:
        resultado = valorA * valorB;
        printf("Resultado da Divisao eh : %2.f \n" , resultado);
        break;

        case 4:
        resultado = valorA / valorB;
        printf("Resultado da Multiplicacao eh : %2.f \n", resultado);
        break;

    }
    	
 system("pause"); /// para o sistema
 
 return(0);

}
