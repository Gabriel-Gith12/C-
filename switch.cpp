#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){    /// executa e motra na tela
 
     int valor;
     
     printf("Digite o valor \n");
     scanf("%d", &valor);
     
     switch(valor){
     	case 1:
     	printf(" O valor eh UM \n");
     	break;
     	case 2:
     	printf(" O valor eh DOIES \n");
     	break;
     	case 3:
     	printf(" O valor eh TRES \n");
     	break;
     	
     	default :
     	printf("O valor nao foi encontrado \n");
     	break;
     	
	 }
     
  
 system("pause"); /// para o sistema
 
 return(0);

}
