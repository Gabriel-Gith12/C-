/// O cardápio  automatizado de uma lancheria/////
/// Quando o usuário abra o sistema mostra a seguinte informação
/// Entrada :
/// Qual o numero da Mesa ?: XX

/// Qual  o item (Codigo) do pedido abaixo? ///Entrada em loop :
/// Código  Produto                   Preço Unitário (R$)
/// 101       Cachorro quente     R$ 5,70
/// 102       X Completo             R$ 18,30
/// 103       X Salada                 R$ 16,50
/// 104       Hamburguer            R$ 22,40
/// 105      Coca 2L                   R$ 10,00
/// 106       Refrigerante            R$ 1,00
/// 000        Encerra pedido
/// Codigo:XX
/// Quantidade:XX


/// Saida:
/// A mesa XXX pediu os seguintes itens:
/// 1- Cachorro 
/// 3- X Completo
/// Com valor total de R$: 60,6

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int flag = 0, pedido, numero = 0;
	int qt = 0,
    	qt100 = 0, qt101 = 0, qt102 = 0, qt103 = 0, qt104 = 0, qt105 = 0,
		flag100 = 0, flag101 = 0, flag102 = 0, flag103 = 0, flag104 = 0, flag105 = 0;
    float valor = 0, valor100 = 0, valor101 = 0, valor102 = 0, valor103 = 0, valor104 = 0, valor105 = 0;
    char sair[10], pedido2[10], qt2[10];
    
while(flag == 0){

        printf("Qual o numero da Mesa ? \n");
        scanf("%s", &sair);
	
	numero = atoi(sair);
	if(numero == 0 ){
		printf("Numero da Mesa Invalido: \n");
		main;
	}
	else{
		break;
	}
}
	
	printf("Qual  o item (Codigo) do pedido abaixo? \n" );
    printf("\nCodigo    Produto             Preco Unitario (R$)");
    printf("\n100       Cachorro quente     R$ 5.70");
    printf("\n101       X Completo          R$ 18.30");
    printf("\n102       X Salada            R$ 16.50");
    printf("\n103       Hamburguer          R$ 22.40");
    printf("\n104       Coca 2L             R$ 10.00");
    printf("\n105       Refrigerante        R$ 1.00");
    printf("\n999      Encerra pedido \n");  
    
while(pedido!=999){
	
do{
        printf("Codigo do Pedido: \n");
        scanf("%s", &pedido2);

        pedido = atoi(pedido2); 
        if(pedido == 0 ){
       	printf("Pedido Invalido: \n");
    }
    
while(pedido != 100 && pedido != 101 && pedido != 102 && pedido != 103 && pedido != 104 && pedido != 105 && pedido != 999){
            	
        printf("Informe um codigo valido: \n");
        scanf("%d", &pedido);
    }
       
}while(pedido == 0);
 
    do{
    	
	if(pedido != 999){
		
        printf("Digite a quantidade: \n");
        scanf("%s",&qt2);
        
        qt = atoi(qt2); 
        if(qt == 0 ){
       	printf("Quantidade Invalido: \n");
       }
    }
        
}while(qt == 0 );
    
        switch(pedido){
        	case 100:
        	qt100 += qt;    
		    valor100 = (5.70 * qt100); 
        	valor += (5.70 * qt);
        	flag100 = 1;
        	break;
        	
        	case 101:
        	qt101 += qt;
        	valor101 = (18.30 * qt101);
        	valor += (18.30 * qt);
        	flag101 = 1;
        	break;
        	
        	case 102:
        	qt102 += qt;
        	valor102 = (16.50 * qt102);
        	valor += (16.50 * qt);
        	flag102 = 1;
        	break;
        	
        	case 103:
        	qt103 += qt;
        	valor103 = (22.40 * qt103);
        	valor += (22.40 * qt);
        	flag103 = 1;
        	break;
        	
        	case 104:
        	qt104 += qt;
        	valor104 = (10.00 * qt104);
        	valor += (10.00 * qt);
        	flag104 = 1;
        	break;
        	
        	case 105:
        	qt105 += qt;
        	valor105 = (1.00 * qt105);
        	valor += (1.00 * qt);
        	flag105 = 1;
        	break;
        	
        }
	}

	    printf("\nA mesa %d pediu os seguintes itens: \n", numero);
	
	if(flag100 == 1){
	    printf("%d- Cachorro quente valor: %.2f \n", qt100, valor100);	
	}
	
	if(flag101 == 1){
	    printf("%d- X Completo valor: %.2f \n", qt101, valor101);	
	}
	
	if(flag102 == 1){
	    printf("%d- X Salada valor: %.2f \n", qt102, valor102);	
	}
	
	if(flag103 == 1){
	    printf("%d- Hamburger valor: %.2f \n", qt103, valor103);	
	}
	
	if(flag104 == 1){
	    printf("%d- Coca 2L valor: %.2f \n", qt104, valor104);	
	}
	
	if(flag105 == 1){
	    printf("%d- Refrigente valor: %.2f \n", qt105, valor105);	
	}
	
	    printf("valor total de R$: %.2f \n",valor);
				
system("pause");
return(0);
}
