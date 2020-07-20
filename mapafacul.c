#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

struct contatos{
	int codigo;
	char nome[20], telefone [20], email[20];
};

int main(){
	
	
	int escolha, contador = 1, i;
	struct contatos pessoa[5];
	
	do{
		printf("Escolha 1 para CADASTRAR\n");
		printf("Escolha 2 para LISTAR\n");
		printf("Escolha 0 para ENCERRAR\n\n");
		scanf("%d", &escolha);
		fflush(stdin);
		
		switch(escolha){
			case 1:
				if(contador<=5){
					printf("CADASTRO DE CONTATO\n");
					printf("Codigo: %d\n", contador);
					printf("Informe o nome: ");
					fgets(pessoa[contador].nome, 20, stdin);
					fflush(stdin);
								
					printf("Informe o telefone: ");
					fgets(pessoa[contador].telefone, 20, stdin);
					fflush(stdin);
				
					printf("Informe o email: ");
					fgets(pessoa[contador].email, 20, stdin);
					fflush(stdin);
				
					printf("\n");
				
					contador++;	
				} else {
					printf("AGENDA LOTADA!\nAGENDA LOTADA!\nAGENDA LOTADA!\n\n");
				}
				break;
			
			case 2:
				if(contador==1){
						printf("Agenda Vazia...\nAgenda Vazia...\nAgenda Vazia...\n\n");
				} else {
					printf("-------------------\nLISTA DE CONTATOS:\n");
					
					for(i=1; i<contador; i++){
						printf("Codigo: %d\n", i);
						printf("Nome: %s", pessoa[i].nome);
						printf("Telefone: %s", pessoa[i].telefone);
						printf("Email: %s", pessoa[i].email);
						printf("------------------------\n");
					}
			
				}
			break;
			
			case 0:
				printf("\nObrigado por utilizar nossos servicos.\nEncerramento do Programa...\nPressione qualquer tecla para sair.");
				system("exit");
				break;
				
			default:
				printf("OPCAO INVALIDA!\n\n");
		}
	}while(escolha != 0);
	
	return(0);
}