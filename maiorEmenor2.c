// Implemente um algoritimo que entre com 6 (seis) valores
// e encontre o maior valor e o menor valor
// saida // o maior valor eh : xxx o menor valor eh : xxx

#include <stdio.h>
#include <stdlib.h>

int main(void){ // executa e motra na tela

   int i, j, valorMaior, valorMenor, posicao, valor[6];  

   for(i=0;i<6;i++){	

   	printf("Digite o valor de entrada valor[%d] \n",i);
   	scanf("%d", &valor[i]);

	 }	  

	 /// tratamento dos dados -- Start

	 //valorMaior = 0;

	posicao  = 0;	  
	for(i=0;i<1;i++){
	 	valorMaior = valor[i]; /// pupula valor na carivel de coondicao maior
	 	valorMenor = valor[i]; /// pupula valor na carivel de coondicao menor
		 for(j=0;j<6;j++){

			// printf("%d < %d\n",valorMaior , valor[j]);			  
			 if( valorMaior < valor[j]){	// condicao do maior		  
			   valorMaior = valor[j];	/// recebe valor 

				 //printf("::::: %d \n",valorMaior);		 	  
	      }

	      if( valorMenor > valor[j]){	// condicao no menor		  
			   valorMenor = valor[j];	/// recebe valor 
				 //printf("::::: %d \n",valorMenor);		 	  
	      }			 	
		 }
	 }
	// Processo de ordenacao do vetor - Start
	
	// Processo de ordenacao do vetor - Start
	
		// Processo de de busca do valor medio - Star
		
		// Processo de de busca do valor medio - End
		
		
	  printf("O Maior valor encontrado eh: %d \n",valorMaior);
	  printf("O Maior valor encontrado eh: %d \n",valorMenor);

	 /// tratamento dos dados -- end

 system("pause"); /// para o sistema

   return(0);

}
