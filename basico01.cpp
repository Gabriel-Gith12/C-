////LINGUAGEM DE 
///LINGUAGEM DE MARCACAO
/// /// Entrada de Dados.
/// /// Processamento.
/// /// Saida de Dados.

/// int= numeros inteiros
/// variavel = porque varia
/// float = numeros com virgulas
/// 
/// char = armazenar caracterias

#include <stdio.h>
#include <stdlib.h>

int main(void){    /// executa e motra na tela

    
    /// declaracao de variaveis - Start
    int i, resultado;
    /// declaracao de variaveis - End
    
    /// Entrada
    printf("Digite o valor que multiplicara por 2 \n");
    scanf("%d", &i);
    
    /// Processamento
    resultado = (i * 2);
    
    /// saida
    printf("O resultado eh : %d \n", resultado);
    
	   system("pause"); /// para o sistema  
	   
       return(0);
       
       
       }
