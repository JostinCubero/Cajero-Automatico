//Me disculpo por no cumplir con en trabajo, le inverti todo mi tiempo la parte logica de tirar la menor cantidad de dinero 
//Me quede sin tiempo para realizar el resto del eneunciado 
#include<stdio.h>
#include <stdlib.h>

#define NOMENCLATURA 3000;

int main (){
    int opcion = 0 ;
    int billetes;
    int cantidad;
    int residuo;
    int residuo2;
    int cantidad_5000;
    int cantidad_10000;
    int i=2;

    do{
	
     printf("Bienvenido a el cajero automatico \n");
     printf("\n1. Retirar dinero");
     printf("\n2. Registro de transacciones");
     printf("\n3. Salir \n");
     printf("\nOpcion: ");
     scanf("%i",&opcion);
     
     
     switch(opcion){
        case 1:	
        	do{
		printf("Cuanto dinero desea retirar : ");
        		scanf("%d",&billetes);
        		
        		if (billetes%1000!=0 || billetes==3000 || billetes==1000){
				printf("La transaccion fallo, solo se depositan billetes de 2000 5000 y 10000 \n\n");
				}
					
		}while (billetes%1000!=0 || billetes==3000 || billetes==1000);
		
				
				if(billetes % 2000==0){
					
					(cantidad = billetes /10000);
        			billetes %= 10000;
        			printf("Billetes de 10000 : %d \n",cantidad);
        			
        			printf("Billetes de 5000 : 0 \n");
        		
        			(cantidad = billetes /2000);
        			billetes %= 2000;
        			printf("Billetes de 2000 : %d \n",cantidad);
						
				}
				else 
				{
					
					if(billetes%5000==0){
						
					(cantidad = billetes /10000);
        			billetes %= 10000;
        			printf("Billetes de 10000 : %d \n",cantidad);
        	
        			(cantidad = billetes /5000);
        			billetes %= 5000;
        			printf("Billetes de 5000 : %d \n",cantidad);
        			
        			printf("Billetes de 2000 : 0 \n");
        			
        		}
        		else{ 
        		
        		if(billetes==7000 || billetes==9000 ){
        			
        			printf("Billetes de 10000 : 0 \n");
        		
        			(cantidad = billetes /5000);
        			billetes %= 5000;
        			printf("Billetes de 5000 : %d \n",cantidad);
        		
        			(cantidad = billetes /2000);
        			billetes %= 2000;
        			printf("Billetes de 2000 : %d \n",cantidad);
				}	
				else{
				
					if(billetes%11000==0, i++ ){
						
						(billetes%10000==1000 );
						(residuo=billetes%5000);
						(cantidad_5000=billetes/5000);
						(cantidad_10000=billetes/10000);

						if(residuo==1000 ){
							
							(cantidad_10000 -= 1);
							(cantidad = billetes /10000);
							
							printf("Billetes de 10000 : %d \n",cantidad_10000);
							
							(residuo = billetes - cantidad_10000*10000);
							(cantidad_5000 -= 1);
							(cantidad = residuo /10000);
							printf("Billetes de 5000 : %d \n",cantidad);
						
							(residuo = billetes - cantidad_5000*5000);
							(cantidad=residuo/2000);
							printf("Billetes de 2000 : %d \n",cantidad); 
							

						}		
        			}
        				if(billetes%13000==0, i++ ){
						
						(billetes%10000==3000 );
						(residuo=billetes%5000);
						(cantidad_5000=billetes/5000);

						if(residuo==3000 ){
							
							(cantidad_10000 -= 1);
							(cantidad = billetes /10000);
							
							printf("Billetes de 10000 : %d \n",cantidad_10000);
							
							(residuo = billetes - cantidad_10000*10000);
							(cantidad_5000 -= 1);
							(cantidad = residuo /10000);
							printf("Billetes de 5000 : %d \n",cantidad);
						
							(residuo = billetes - cantidad_5000*5000);
							(cantidad=residuo/2000);
							printf("Billetes de 2000 : %d \n",cantidad); 
							
						}		
        			}
        			
        			
        			else{
        				
        			(cantidad = billetes /10000);
        			billetes %= 10000;
        			printf("Billetes de 10000 : %d \n",cantidad);
        			
        			(cantidad = billetes /5000);
        			billetes %= 5000;
        			printf("Billetes de 5000 : %d \n",cantidad);
        		
        			(cantidad = billetes /2000);
        			billetes %= 2000;
        			printf("Billetes de 2000 : %d \n",cantidad);
					}
        		}	
			}
        }

				
         break;   
		   
        	 
        case 2: 
        
		 printf("Billetes de 10000 : %d \n",cantidad);
		 
         printf("Billetes de 5000 : %d \n",cantidad);
         
         printf("Billetes de 2000 : %d \n",cantidad);
		break;
        
         
	
        case 3: return -1;
		break;
        
        default: printf ("Se equivoco de obcion de menu");

                }
 

 	}while (opcion =3);
 	
 	
 	
 	return 0; 
    
}
