#include <stdio.h>

int main(){
	int vetor1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	printf("%d", vetor1[1]);
	for(int vet = 0; vet < 10; vet++){
		printf("Imprimir vetor na posicao %d\n", vetor1[vet]);
	}
	return 0;
}
