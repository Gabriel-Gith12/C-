#include <stdio.h>
#include <stdlib.h>

 int main(void){  // executa e mostra na tela

    int i, p=0, imp=0, resultadoPar, vetor[4], vetorPar[4], vetorImpar[4];
 
 /// Entrada de valores - Start
 
    for(i=0;i<4;i++){	
    	printf("Digite o valor no vetor [%d] \n",i);
    	    scanf("%d" ,&vetor[i]);
	}
	
/// Entrada de valores - End

/// Impressao de Valores - Start

    for(i=0;i<4;i++){	
        resultadoPar = (vetor[i]%2);
            if(resultadoPar ==0 ){
                                         ///printf("Valores Pares[%d] = %d \n",i,vetor[i]);
    	    
    	vetorPar[p] = vetor[i];
    	p++;
    
	        }else{
		
		vetorImpar[imp]= vetor[i];
		imp++;
	}
}
        
	
	for(i=0;i<p;i++){
	    printf("vetorPar[%d] = %d \n", i ,vetorPar[i]);
	}
    
    for(i=0;i<imp;i++){
    	printf("vetorImp[%d] = %d \n", i ,vetorImpar[i]);
	}
    
/// Impressao de Valores - End
 

         system("pause"); /// para o sistema

    return(0); /// enter

}
