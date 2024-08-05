#include <stdio.h>
#include <stdlib.h>


int main() {
	int temperatura[121] = {15, 17, 19, 21, 23, 25, 27, 29, 31, 33,35, 37, 39, 40, 15, 17, 19, 21, 23, 25,27, 29, 31, 33, 35, 37, 39, 40, 15, 17,19, 21, 23, 25, 27, 29, 31, 33, 35, 37,39, 40, 15, 17, 19, 21, 23, 25, 27, 29,31, 33, 35, 37, 39, 40, 15, 17, 19, 21,23, 25, 27, 29, 31, 33, 35, 37, 39, 40,15, 17, 19, 21, 23, 25, 27, 29, 31, 33,35, 37, 39, 40, 15, 17, 19, 21, 23, 25,27, 29, 31, 33, 35, 37, 39, 40, 15, 17,19, 21, 23, 25, 27, 29, 31, 33, 35, 37,39, 40, 15, 17, 19, 21, 23, 25, 27, 29,31, 33, 35, 37, 39, 40, 15, 17, 19, 21,23, 25, 27, 29, 31, 33, 35, 37, 39, 40};
	int i;
	int menor = temperatura[0];
	int maior = temperatura[0];
	int soma;
	float media;
	int inferiores;
	
	for(i = 0; i < 121; i++){
		if(temperatura[i] < menor){
			menor = temperatura[i];
		}
	}
	
	for(i = 0; i < 121; i++){
		if(temperatura[i] > maior){
			maior = temperatura[i];
		}
	}
	for(i = 0; i < 121; i++){
		soma += temperatura[i];
	}
	 	media= (float) soma/121;
	for(i = 0; i < 121; i++){
		if(temperatura[i] < media){
		inferiores++;	
		}
		
	}
	
	
	printf("A menor temperatura detectada é: %d graus\n", menor);
	printf("A menor temperatura detectada é: %d graus\n", maior);
	printf("A media da temperatura desses 121 dia sao: %.2f graus \n", media);
	printf("numero de dias com a temperatura menor do que a media e de:%d \n", inferiores);
	
	return 0;
}
