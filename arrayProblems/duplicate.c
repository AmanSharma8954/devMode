#include<stdio.h>
#define MAX 100

int main() {
	int size1 = 0;
	int i= 0,j= 0,k= 0,count=0,size2=0;
	int arr[MAX];
	int result[MAX];


	printf("\n\nEnter the size of array: ");
	scanf(" %d", &size1);

	printf("\n\nEnter the element in the array: ");
	for( i = 0; i<size1; ++i)
		scanf(" %d", &arr[i]);
	
	for(i = 0; i<size1-1; ++i){
		for(j = i+1; j<size1; ++j){
			if( arr[i] == arr[j] && arr[j] != -1 ) {
				count++;
				arr[j] = -1;
			}
		}
	}
	
	
	size2 = size1 - count;

	for(i = 0; i<size1; ++i){
		if( arr[i] != -1 ) {
			result[k++] = arr[i];
		}
	}

	for(i = 0; i<k; ++i) 
		printf(" %d" , result[i]);

	printf("\n\n");

	return 0;
}
