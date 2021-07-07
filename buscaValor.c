/// 1,3,4,6
/// Busque o valor : 3
/// Encontrei o valor 3 estava na posicao[1]

#include <stdio.h>
#include <stdlib.h>

 int main(void){  // executa e mostra na tela

    int i, flag=0, busca, vetor[4];
 
/// Entrada de valores - Start
 
    for(i=0;i<4;i++){
		
    	printf("Digite o valor no vetor [%d] \n",i);
    	    scanf("%d" ,&vetor[i]);
    	    
	}
	    printf("Digite o valor da busca \n");
    	scanf("%d" ,&busca);
	
/// Entrada de valores - End

/// Entada de busca -Star

    for(i=0;i<4;i++){
    	if(busca == vetor[i]){
    		
    		printf("Encontrei o valor %d estava na possicao [%d] \n", busca,i);
    		flag = 1;
    		
    	///}else{
    		///printf("bah... nao encontrei o valor %d \n", busca,i);
    		    ///flag=0;
		}	
    }
    
        	if(flag !=1){
    		printf("bah... nao encontrei o valor %d \n", busca,i);
    		flag=0;
    	}
    	
/// Entada de busca -End

          system("pause"); /// para o sistema

    return(0); /// enter

}
