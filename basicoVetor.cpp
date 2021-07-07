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

//------------------

/// plano 
#include <stdio.h>
#include <stdlib.h>

int main(void){    /// executa e motra na tela

    
    /// declaracao de variaveis - Start
    int i, resultado, vetor[4];
    /// declaracao de variaveis - End
    
    vetor[0] = 10;
    vetor[1] = 22;
    vetor[2] = 30;
    vetor[3] = 42;
    
    /// Processamento
    for(i = 0;i < 4;i++){

    printf("Digite valor do vetor [%d] \n",i);
     scanf("%d", &vetor[i]);
    
	}
	
	for(i = 0;i < 4;i++){
	resultado[i] = (vetor[i] * 2);
	
	}
	
	/// Saida
	for(i = 0;i < 4;i++){
	printf("O vetor[%d] * 2 = %d \n",i , resultado[i]);
			
	}

	   system("pause"); /// para o sistema  
       return(0);
       
       }
