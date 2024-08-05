#include <stdio.h>
#include <stdlib.h>
#define max_func 100

int main(){
	float salario[max_func];
	int codigo[max_func];
	float novo[max_func];
	float percentual[max_func];
	int i=0;
	
	while (1){
		float salariof;
		int cdfunc;
		
		printf ("informe o codigo do funcionario: ");
		scanf("%d", &cdfunc);
		
		if(cdfunc==999){
			break;
		}
		codigo[i]=cdfunc;
		
		printf("informe o salario do funcionario %d:", cdfunc);
		scanf("%f", &salariof);
		salario[i]=salariof;
		
		if(salariof<500){
			percentual[i]=0.15;
		}
		else if(salariof>=500 && salariof<=1000){
			percentual[i]=0.10;
		}
		else if(salariof>1000){
			percentual[i]=0.05;
		}
		novo[i] = salariof *(1 + percentual[i]);
		i++;
			
	}
	int totalFuncionarios = i;
    
   
    printf("\nResultados:\n");
    printf("Código\tSalário\t\tPercentual\tNovo Salário\n");
    for (i = 0; i < totalFuncionarios; i++) {
        printf("%d\t%.2f\t\t%.2f%%\t\t%.2f\n", codigo[i], salario[i], percentual[i] * 100, novo[i]);
    }
    
    return 0;
 	
}

