#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(void){    /// executa e motra na tela

     int i;
	 
	 srand(time(NULL));
	
	for(i=0;i<100;i++){

     printf("%d \n",rand()%100);
     
   	}

     
  
 system("pause"); /// para o sistema
 
 return(0);

}
