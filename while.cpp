#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){    /// executa e motra na tela

     int contador = 0;
     
     while(contador<10){
     	
     	 printf("O valor eh %d",contador);
		 contador++;
	 }
	 
	 for(contador = 0;contador<10;contador++;){
	 	 printf("O valor eh %d", contador);
	 }

 system("pause"); /// para o sistema
 
 return(0);

}
