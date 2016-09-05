#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
	int i, j, periodo, meses=12;
	
	printf("Ingrese el periodo: ");
	scanf("%d", &periodo);
	if (periodo > 0){
		system("cls");
		printf("         DJF   JFM   FMA   MAM   AMJ   MJJ   JJA   JAS   ASO   SON   OND   NDJ");
		for(i=1 ; i<=periodo; i++){
			printf("\n\nYear %d:", i);
			for(j=0; j<meses; j++){
			
			}
		}
	} else {
		printf("Ingrese un periodo valido");
	}


	return 0;

}
