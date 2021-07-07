#include <stdio.h>
#include <stdlib.h>

int main(void){ // executa e mostra na tela
    
      
	  int numero, valorCubo;
	  
	  printf("Entre com um numero inteiro para sair o cubo \n");
  
	   scanf("%d",&numero);
	   
	   valorCubo = (numero * numero * numero);
	   
	   printf(" O valor do cubo eh %d \n",valorCubo);
	   
	   
	   system("pause"); /// para o sistema  
       
       return(0);
       
       }
