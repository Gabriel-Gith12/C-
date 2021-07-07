// Implemente um algoritimo que entre com (quatro) valores
// mostre os valores ao cubo da entrada digitada (2) o valor 2* = 8

#include <stdio.h>
#include <stdlib.h>

int main(void){ // executa e mostra na tela


    int i,cubo, valor[4]; // declaração de variaveis

// laço para digitar 4 valores - Start
    
   for(i = 0;i < 4; i++){
      printf("Digite os valor[%d]\n",i);
        scanf("%d",&valor[i]); 
     
 	  }
 	  
// laço para digitar 4 valores - End 	  

// processo do CUBO - Start
//cubo = n*n*n*
 	 for(i = 0;i < 4; i++){
 	 	
 	 	cubo = (valor[i] * valor[i]* valor[i]);
 	 	
     	printf("O valor do cubo eh[%d] = %d \n",i,cubo,valor[i]);

     }      
// processo do CUBO - End
   system("pause"); /// para o sistema

   return(0); /// enter

}
