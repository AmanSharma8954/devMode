#include<stdio.h>

int main() {
	int n;
	
	printf("Enter the size of Array: ");
	scanf(" %d", &n);

	int arr[n];
	printf("Enter the element in array");
	for(int i = 0; i<n; ++i)
		scanf(" %d", &arr[i]);
	int leader = -1;
	for(int i = n-1; i>=0; i--){
		
		if( arr[i] > leader){
	       		leader = arr[i];
			printf(" %d", leader);
		} 

	}



	return 0;
}
