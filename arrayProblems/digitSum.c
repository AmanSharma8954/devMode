#include<stdio.h>

int main() {
	int num;
	int sum,rem;

	printf("Enter a number: ");
	scanf(" %d", &num);

	sum = 0;
	while(num) {
		rem = num%10;
		sum += rem;
		num = num/10;
	}

	printf("The resultant ans : %d", sum);
	
	return 0;
}

