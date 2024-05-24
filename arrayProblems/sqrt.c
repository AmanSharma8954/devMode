#include<stdio.h>
#include<math.h> 


int main() {
	int n;
	double val,next,prev;

	printf("Enter a number: ");
	scanf(" %d", &n);

        val = sqrt(n);
	int ceil_val = ceil(val);

	int val1 = pow(ceil_val,2);
	int val2 = pow(ceil_val-1,2);

	int result = abs(val1-n) < abs(val2-n) ? val1 : val2;  
/*
	for(int i = 1; i<n; ++i){ 
	       double temp = pow(i,2);
		if( temp > val ) {
			next = i;
			prev = i-1;
			break;
		}
	}
*/
			
	printf(" %d", result );
	return 0;
}
