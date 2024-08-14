#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max_aluno 80

int main() {
	int rm[max_aluno];
	char alunos[100][100];
	float provas1[max_aluno];
	float provas2[max_aluno];
	float provas3[max_aluno];
	float provas4[max_aluno];
	float provas5[max_aluno];
	float soma[max_aluno];
	float media [max_aluno];
	int i;
	int h;
	
	while(1){
		int numero;
		char nome [100];
		float nota1;
		float nota2;
		float nota3;
		float nota4;
		float nota5;		
		printf("digite o rm do aluno:\n\n");
		scanf("%d", &numero);
		if(numero == 81){
			
			break;
		}else{
			rm[i]=numero;
		}
		printf("Digite o neme do aluno %d:\n\n", numero);
		scanf("%s", nome);
		strcpy(alunos [i], nome);
		printf("digite as notas do aluno %d:\n", numero);
		printf("nota 1:");
		scanf("%f", &nota1);
		printf("\nNota 2:");
		scanf("%f", &nota2);
		printf("\nNota 3:");
		scanf("%f", &nota3);
		printf("\nNota 4:");
		scanf("%f", &nota4);
		printf("\nNota 5:");
		scanf("%f", &nota5);
		provas1[i]=nota1;
		provas2[i]=nota2;
		provas3[i]=nota3;
		provas4[i]=nota4;
		provas5[i]=nota5;
		soma[i]= nota1+nota2+nota3+nota4+nota5;
		media[i]= soma[i]/5;
		i++;
	}
	
	printf("O nome e media de aluno desta faculdade sao:\n\n");
	for(h=0; h < i; h++){
	printf("rm:%d \t nome:%s\t\t media: %.2f\n\n", rm[h], alunos[h], media[h]);

	}
	return 0;
}
