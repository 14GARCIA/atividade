#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main (){
	int marcadores[100];
	char nome [100][100];
	float preco[100];
	int estoque[100];
	int vendas[100];
	float totalp[100];
	float soma = 0;
	float total;
	int i = 0 ;
	int h = 0 ;
	
	while(1){
	
	int marcador;
	char name [100];
	float valor;
	int quantidade;
	int venda;
	
	printf("digite o codigo do produto:\n\n");
	scanf("%d", &marcador);
		
	if(marcador ==101){
	break;
}
	if(i< 100){
		marcadores[i]=marcador;
		
}	else{
	printf("voce ja digitou todos os produtos do estoque");
	break;
}

printf("digite o nome do produto:\n\n");
scanf("%s", name);

	strcpy(nome [i],name);

printf("digite o valor do produto: \n\n");
scanf("%f", &valor);

	preco[i]=valor;


printf("digite a quantidade de produtos que ha no estoque: \n\n");
scanf("%d", &quantidade);
	estoque[i]=quantidade;

printf("digite quantos produtos foram vendidos nesse mes:\n\n");
scanf("%d", &venda);
if(venda>quantidade){
	printf("ERRO:\n\n");
	printf("A quantidade de produtos vendidos nao pode ser maior que a quantidade no estoque\n\n");
	return 1;
}
	vendas[i]=venda;

	i++;	
}

printf("dados: \n\n\n");

	for(h=0; h < i; h++){
	printf("%d\t %s\t %.2f\t %d\t %d\n\n", marcadores[h], nome[h], preco[h], estoque[h], vendas[h]);
	}	
printf("o valor total de cada produto vendido no mes foi de:\n\n");

	for(h=0; h<i; h++){
	totalp[h] = preco[h]*vendas[h];
	printf("%.2f\n", totalp[h]);
}
	for(h=0; h<i; h++){
	soma += totalp[h];
	}

printf("o valor total de todos produto vendido no mes foi de:\n\n");
printf("%.2f", soma);

for(h=0; h < i; h++){
	
	printf("%d\t %s\t %.2f\t %d\t %d\n\n", marcadores[h], nome[h], preco[h], estoque[h], vendas[h]);
	}
	return 0;
}
