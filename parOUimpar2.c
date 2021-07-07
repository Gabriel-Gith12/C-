/// Implemente um algoritimo que receba 10 velores
/// mostre os valores que sao Pares e Some os valores
/// que sao imapares

#include <stdio.h>
#include <stdlib.h>

int main(void){ // executa e mostra na tela


    int i, j, somaimpar, resultado, valor[10]; // declaração de variaveis

// laço para digitar 10 valores - Start
    
   for(i = 0;i < 10; i++){
     printf("Digite os valor[%d]\n",i);
     scanf("%d",&valor[i] ); 
     
 	  }
 	  
// laço para digitar 10 valores - End 	  
 	  
// laço para mostar Valores Pares e Soma Impar - Start 
    somaimpar = 0;
 	 for(j = 0;j < 10; j++){
 	 	
 	 	resultado = (valor[j]%2);
 	 	
 	 	 if(resultado ==0){ 
     		printf("Valores Pares[%d] = %d \n",j,valor[j]);
     		
        }else{
        	 somaimpar = (somaimpar + valor[j]);
		    printf("Soma dos Imapares %d \n", somaimpar);
        }

 	}
 	  
// laço para mostrar os Valores Parese Soma Impar - End


    
   system("pause"); /// para o sistema

   return(0); /// enter

}
