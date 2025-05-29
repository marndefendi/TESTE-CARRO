#include <stdio.h>
#include <stdlib.h>

typedef struct {
   char marca[10], modelo[10], cor[10];
   int ano, id ,combustivel;
   float valor;
} Carro; 

Carro carros[10];

int numCarro = 0;

void cadastrarVeiculo();
void listarVeiculos();
void listarportipodeCombustivel();
void buscarVeiculo();

int main() {
	int opcao;
	
	do {
		printf("---Veiculo---\n");
		printf("1 -Registrar carro\n");
		printf("2 -Listar veiculo\n");
		printf("3 -Listar por combustivel\n");
		printf("4 -Buscar veiculo\n");
		printf("0 -Sair\n");
		printf("Escolha uma opcao.\n");
		scanf("%d", &opcao);
		
	system("cls");
		
		switch(opcao) {
			case 1:
				cadastrarVeiculo();
				break;
			case 2:
				listarVeiculos();
				break;	
			case 3:
				listarportipodeCombustivel();
				break;
			case 4:
//				buscarVeiculo();
				break;
			case 0:
				printf("obrigado!\n");
				break;
			default:
				printf("opcap invalida!\n");
				break;	
		}
	printf("enter para continuar...");
	getchar();
	getchar();
	system("cls");
	
	}while(opcao !=0);
	
	return 0;	
}

void cadastrarVeiculo(){
	system("cls");
	printf("------Cadastro do carro------\n");
	printf("ID : \n");
	scanf ("%d", &carros[numCarro].id);
	printf("Marca :\n");
	scanf("%s", carros[numCarro].marca);
	printf("Modelo :\n");
	scanf("%s", carros[numCarro].modelo);
	printf("Cor:\n");
	scanf("%s", carros[numCarro].cor);
	printf("Ano do carro:\n");
	scanf("%d", &carros[numCarro].ano);
	printf("Valor\n");
	scanf("%f", &carros[numCarro].valor);
	printf("Tipo de combustivel:\n"); 
	printf("1 -Etanol\n");
	printf("2 - Gasolina\n");
	printf("3 -Flex\n");
	printf("4 -Eletrico\n");
	scanf("%d", &carros[numCarro].combustivel);
	
	
	numCarro++;
	
}

void listarVeiculos(){
	printf("-----Listar veiculos------\n");
	for(int i = 0; i < numCarro; i++){
		printf("ID : %d\n" , carros[i].id);
		printf("Marca : %s \n", carros[i].marca);
		printf("Modelo : %s\n", carros[i].modelo);
		printf("Cor : %s\n", carros[i].cor);
		printf("Ano do carro : %d\n", carros[i].ano);
		printf("Valor : %f\n", carros[i].valor);
		printf("Tipo de combustivel: %d \n", carros[i].combustivel);
	}
}

void listarportipodeCombustivel(){
	int tipo;
	printf("-----Listar por combustivel------\n");
	printf("Digite o tipo de combustivel que deseja filtrar \n");
	printf("Tipo de combustivel:\n"); 
	printf("1 -Etanol\n");
	printf("2 - Gasolina\n");
	printf("3 -Flex\n");
	printf("4 -Eletrico\n");
	scanf("%d", &tipo);
	for(int i = 0; i < numCarro; i++){
		if (carros[i].combustivel==tipo){
		printf("ID : %d\n" , carros[i].id);
		printf("Marca : %.s\n", carros[i].marca);
		printf("Modelo : %s\n", carros[i].modelo);
		printf("Cor : %s\n", carros[i].cor);
		printf("Ano do carro : %d\n", carros[i].ano);
		printf("Valor : %f\n", carros[i].valor);
		printf("Tipo de combustivel: %s \n", carros[i].combustivel);
		
		}
	
}
}
