#include <stdio.h>

//	operadores aritméticos:
//		+, -, *, /, %

//	operadores de atribuição:
//		=, +=, -=, /=, %=, *=

//	operadores relacionais
//		<, >, >=, <=, ==, !=

//	operadores logicos
//		&& (e/and), || (ou/or), ! (nao/not)

//	operadores de incremento e decremento (aumentar ou diminuir)
//		++, --


int main(){
//	int zero = 20;
//	zero /= 10;
//	printf("%d", zero);


//	int passos = 0;
	
//	passos = passos + 1
//	passos += 1
//	passos++
	int n1 = 20;
	n1 += 5;
	printf("%d\n", n1);
	n1 -= 3;
	printf("%d\n", n1);
	n1 *= 2;
	printf("%d\n", n1);
	n1 /= 4;
	printf("%d\n", n1);
	n1 %= 2;
	printf("%d", n1);
	
	
	return 0;
}
