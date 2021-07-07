/// 1,3,43,6
/// Busque o valor : 3

/// saida

/// vetorDireita[0] = 43
/// vetorDireito[1] = 6

/// vetorEsquerda[3] = 1
/// vetorDireito[4] = 3

#include <stdio.h>
#include <stdlib.h>

 int main(void){  // executa e mostra na tela

    int i, busca, flag=0, vE=0, vD=0, vetor[4], VetorDireita[4], VetorEsquerda[4];

/// Entrada de valores - Start
 
    for(i=0;i<4;i++){
		
    	printf("Digite o valor no vetor [%d] \n",i);
    	    scanf("%d" ,&vetor[i]);
    	    
	}
	    printf("Digite o valor da busca \n");
    	scanf("%d" ,&busca);
	
/// Entrada de valores - End

/// vetor da Esquerda -Start

    for(i=0;i<2;i++){
    	if(flag ==0){
        VetorEsquerda[vE] = vetor[i];
    	vE++;
    		
	}
			
    	if(busca == vetor[i]){	
        flag=1;
        
	}	
}
    
    for(i=0;i<vE;i++){
    	printf("VetorEsquerda [%d]= %d \n", i, VetorEsquerda[i]);

    }   
    
/// vetor da Esquerda -Start

/// vetor da Direita -Start

    for(i=2;i<4;i++){
    	if(flag ==0){
        VetorDireita[vD] = vetor[i];
    	vD++;
    		
	}
			
    	if(busca == vetor[i]){	
        flag=1;
        
	}	
}
    
    for(i=0;i<vD;i++){
    	printf("VetorDireita [%d]= %d \n", i, VetorDireita[i]);

    }   
    
    /// vetor da Direita -End
    
          system("pause"); /// para o sistema

    return(0); /// enter

}
