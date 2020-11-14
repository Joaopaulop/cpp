#include <cstdio>

int main(){

	double preco = 99.80;
	double imposto = 0.08;

	double fpreco = preco *(1+imposto);

	printf("preco final eh %.2f", fpreco);

	return 0;
}