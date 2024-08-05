#include <stdio.h>
#include <stdlib.h>



int main() {
	int santos[7];
	int n1,n2,n3,n4,n5,n6,n7;
	int i;
	float media;
	int soma;

	
	printf("digite um numero:");
	scanf("%d", &n1);
	printf("digite outro numero:");
	scanf("%d", &n2);
	printf("digite outro numero:");
	scanf("%d", &n3);
	printf("digite outro numero:");
	scanf("%d", &n4);
	printf("digite outro numero:");
	scanf("%d", &n5);
	printf("digite outro numero:");
	scanf("%d", &n6);
	printf("digite outro numero:");
	scanf("%d", &n7);
	
		 soma  = n1 + n2 + n3 + n4 + n5 + n6 + n7;
		 media= (float) soma / 7;
		 
		 printf(" sua media e:%.2f\n\n", media);
		 
	santos[0] = (n1 > media) ? n1 : 0;
    santos[1] = (n2 > media) ? n2 : 0;
    santos[2] = (n3 > media) ? n3 : 0;
    santos[3] = (n4 > media) ? n4 : 0;
    santos[4] = (n5 > media) ? n5 : 0;
    santos[5] = (n6 > media) ? n6 : 0;
    santos[6] = (n7 > media) ? n7 : 0;
    
		 printf("numeros que voce digitou que estao acima da media:\n\n");
		   for (i = 0; i < 7; i++) {
        printf(" %d\n", santos[i]);
    }
		 
	return 0;
}
