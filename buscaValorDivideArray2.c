/// 3,2,43,6
/// Busque o valor : 2

/// saida

/// vetorEsquerda[0] = 2
/// vetorEsquerda[1] = 3

/// vetorDireito[0] = 6
/// vetorDireito[1] = 43

#include <stdio.h>
#include <stdlib.h>

 int main(void){  // executa e mostra na tela

    int i, j, a, r, busca, aux, flag=0, vE=0, vD=0, vetor[4], VetorDireita[4], VetorEsquerda[4], VetorResultado[4];

/// Entrada de valores - Start
 
    for(i=0;i<4;i++){
		
    	printf("Digite o valor no vetor [%d] \n",i);
    	    scanf("%d" ,&vetor[i]);
    	    
	}
	    printf("Digite o valor da busca \n");
    	scanf("%d" ,&busca);
	
/// Entrada de valores - End

/// vetor da Esquerda e Direita - Start

    for(i=0;i<4;i++){
    	if(flag ==0){
        VetorEsquerda[vE] = vetor[i];
    	vE++;
    		
	}
			
    	if(busca == vetor[i]){	
        flag=1;
        
	}	
	
	    if(flag == 1 && busca != vetor[i]){
	    VetorDireita[vD] = vetor[i];
    	vD++;
    	
	}
}

/// vetor da Esquerda e Direita - End

/// Ordenar os valores da Esquerda - Start
   
    for(i=0;i<vE;i++){
    	for(j=0;j<vE;j++){
    		if(VetorEsquerda[i] < VetorEsquerda[j]){
    		aux = VetorEsquerda[i];
    		VetorEsquerda[i] = VetorEsquerda[j];
    		VetorEsquerda[j] = aux;
		    } 
        }
    }

/// Ordenar os valores da Esquerda - End

/// Ordenar os valores da Direita - Start

    for(i=0;i<vD;i++){
    	for(j=0;j<vD;j++){
    		if(VetorDireita[i] < VetorDireita[j]){
    		aux = VetorDireita[i];
    		VetorDireita[i] = VetorDireita[j];
    		VetorDireita[j] = aux;
    	    }
		} 
    }
    
/// Ordenar os valores da Direita - End

/// Mostrar os Resultados - Start


    ///for(i=0;i<vE;i++){
    	///printf("VetorEsquerda [%d]= %d \n", i, VetorEsquerda[i]);


    ///}   
    
        ///for(i=0;i<vD;i++){
    	///printf("VetorDireita [%d]= %d \n", i, VetorDireita[i]);

    ///}   
    
/// Mostrar os Resultados - End   

/// Inclusao do vetorEsquerda no vetorResultado

	  	for(i=0; i<vE; i++){ 	  		
 	  		 VetorResultado[i] = VetorEsquerda[i];
	    }
	    
/// Inclusao do vetorDireita no vetorResultado 

        r=0;
        for(a=i;a<(vD+i);a++){ 
            VetorResultado[a] = VetorDireita[r];
            r++;     
        }
 
/// 
 
	for(i=0; i<4; i++){
	 
		printf("VetorResultado[%d]= %d \n", i, VetorResultado[i]);
	}
	

	
 flag=0; 
 
 system("pause"); /// para o sistema
      
 return(0);
      
}
