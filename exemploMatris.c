/// Mostre na tela somente
/// saida o valor resulta [0][0] = 21 

#include <stdio.h>
#include <stdlib.h>

 int main(void){  // executa e mostra na tela
 
///int i, j, tamanho, valorResultado[4][1];
        
        
        int i,j, tamX, tamY, valorResultado[4][2];
		
		tamX = sizeof(valorResultado[4][2]);
		tamY = 2;
		
		printf("%d \n", tamY);
		
		valorResultado[0][0] = 21;
		valorResultado[1][0] = 3;
		valorResultado[2][0] = 22;
		valorResultado[3][0] = 1;
		
		valorResultado[0][1] = 99;
		valorResultado[1][1] = 88;
		valorResultado[2][1] = 77;
		valorResultado[3][1] = 55;
		
///for(i=(tamanho-1);i>=0;i--){
///printf("%d \n",valorResultado[i][2]); 
                    
                for(i=0;i<tamY;i++){
                    for(j=0;j<tamX;j++){
                        printf("valorResultado [%d][%d] = %d \n",i, j, valorResultado[j][i]); 
               
               
//printf("valor[%d]= %d \n",j,valor[i][1]);
               
			  }
		}
 
        system("pause"); /// para o sistema

    return(0); /// enter

}
