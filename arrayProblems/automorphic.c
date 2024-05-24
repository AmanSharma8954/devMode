#include<stdio.h>

int main() {
	printf("Enter a number");
	int n;

	scanf(" %d", &n);

	int val = n*n;
	int len = (int)log10(n)+1;

	int power = pow(10,len);

	int mod_val = val % power;
	if( mod_val == n)
		printf("Automorphic");
	else
		printf("Not");



	return 0;
}
