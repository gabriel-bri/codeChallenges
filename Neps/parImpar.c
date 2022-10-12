#include <stdio.h>
#include <stdlib.h>

void main(){
    // Lendo a entrada do exercício
	int B, C;
	scanf("%d",&B);
	scanf("%d",&C);

    int resultado = B + C;
	
	if(resultado % 2 == 0)
		printf("Bino");
	else
		printf("Cino");
}