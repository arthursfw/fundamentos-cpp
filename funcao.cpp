#include <stdio.h>

int soma(int a, int b){
	return a + b;
}

int main(){
	int resultado = soma(2, 2);
	int resultado2 = soma(10, 40);
	printf("%d\n%d", resultado, resultado2);
	return 0;
}
