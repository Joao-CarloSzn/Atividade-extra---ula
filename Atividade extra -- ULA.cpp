#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
    int num, num2;
    int A;
    int B;

          //DEFINIÇAO DA INTERFACE

    while(true){                                             
    	printf("Menu principal da ULA\n");
    	printf("\n1 - Definir registrador A\n");
    	printf("2 - Definir registrador B\n");
    	printf("3 - Ler registrador A(Acc)\n");
    	printf("4 - Ler registrador B\n");
    	printf("5 - Ler registrador de flags\n");
    	printf("6 - Definir operaçao\n");
    	printf("7 - Executar ULA\n");
    	printf("8 - Sair\n\n\n");
    	printf("Escolha a opção => ");
    	scanf("%d", &num);
    	
    	//SELECIONAR OPÇOES DO MENU
    	
    	switch(num){                         
    		case 1:
    			printf("Defina registrador A: ");
    			scanf("%d",&A);
				system("cls");
    			break;
    		case 2:
    			printf("Defina registrador B: ");
    			scanf("%d",&B);
    			system("cls");
    			break;
			case 3:
    			printf("Lendo registrador A: %d \n", A);
    			system("pause");
				system("cls");		
    			break;
			case 4:
    			printf("Lendo registrador B: %d \n", B);
    			system("pause");
				system("cls");
    			break;
			case 5:  // FLAG DE STATUS
    			printf("Lendo registrador de flags: \n");
    		    printf("\nO resultado é: %d \n",A);
    		    if(A > 0){
    		    	printf("\nO signal flag é positivo \n\n");
				}else 
			    if(A < 0){
				    printf("\nO signal flag é negativo \n\n");
				}
				else 
				if(A == 0){
					printf("\nO zero flag é nulo \n\n");
				}
				system("pause");
			    system("cls");	
    			break;
			case 6:  //SELECIONAR OPERADORES
    			printf("Operaçoes: \n");
    			printf("\n1 - Soma\n2 - Subtracao\n3 - Multiplicacao\n4 - Divisao\n5 - AND \n6 - OR \n7 - XOR\n8 - NOT\n\n");
    			scanf("%d",&num2);
                printf("Operaçao selecionada: %d \n\n", num2);
                system("pause");
		    	system("cls");
    			break;			
			case 7:  //EXECUTAR ULA
    			printf("Executar ULA:  \n\n");
    			printf("Registrador A: %d \n", A);
    			printf("Registrador B: %d \n", B);
    			
    			switch(num2){
                	case 1:
                		A = A+B;
                		
                		printf("A soma é: %d \n", A);
                		system("pause");
			        	system("cls");	
                		break;
                	case 2:
					    A = A-B;
						printf("A subtraçao é: %d \n", A);	
						system("pause");
			        	system("cls");	
						break;
					case 3:
					    A = A*B;
						printf("A multiplicaçao é: %d \n", A);
						system("pause");
			        	system("cls");	
						break;
					case 4:
					    A = A/B;
						printf("A divisao é: %d \n", A);
						system("pause");
			        	system("cls");	
						break;	
					case 5:
					    A = A & B;
						printf("Registrador A e Registrador B:  %d bits \n\n", A);	
						system("pause");
		            	system("cls");	
						break;
					case 6: 
					    A = A | B;
						printf("Registrador A ou Registrador B: %d \n\n", A);
						system("pause");
			        	system("cls");	
						break;
					case 7:
						A = A ^ B;
						printf("Registrador A ou-exclusivo Registrador B:  %d \n\n", A);
						system("pause");
				        system("cls");	
						break;
					case 8:
					    A = (~A);
					   printf("NOT: %d \n", A);
					   system("pause");
			           system("cls");	
					    break;
				}
    	    	break;
    	    	system("pause");
				system("cls");
			case 8:
				printf("\nSaindo...");
    			exit(0);
    			break;		
		}
	}
}



