#include<stdio.h>
#include<math.h>
int main() {
	int n;
	printf("Enter no:");
	scanf(" %d", &n);

	int len = (int)log10(n)+1;
	int num = n;
	int sum = 0;
	while(num){
		sum += pow(num%10,len);
		num = num/10;
	}

	if( n == sum )
		printf("Armstrong");
	else 
		printf("NOT");
	

	
	return 0;
}
