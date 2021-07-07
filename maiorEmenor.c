// Implemente um algoritimo que entre com 6 (seis) valores
// e encontre o maior valor
// saida // o maior valor eh : xxx

#include <stdio.h>
#include <stdlib.h>


int main(void){  // executa e mostra na tela

    int i, g, maior, menor, posicao, valor[6]; 
 

// laço para digitar 6 posicoes - Start

   for(i = 0;i < 6; i++){
      printf("Digite os valor[%d]\n",i);
        scanf("%d",&valor[i]); 

    }
    
// laço para digitar 6 posicoes - End
     
// laco para encontar o Valor Maior - Start

    posicao  = 0;	  
	for(i=0;i<1;i++){
     maior = valor[i];
     menor = valor[i];
      
     for(g=0;g<6;g++){
     	
       if( maior < valor[g]){
       	maior = valor[g];
    }
	   if( menor > valor[g]){
	   	menor = valor[g];
	   }  
     }
}
    
    
    
    printf("Maior numero eh = %d \n",maior);
    printf("Menor numero eh = %d \n",menor);
      
// laço para encontar o Valor Maior - End 

   system("pause"); /// para o sistema

   return(0); /// enter

}
