#include<stdio.h>
#include<stdlib.h>
#define MAX 100

int main() {

	int size;
	int arr[MAX];
	int i,j;
	int flag, start, temp;
	int elem;


	printf("\n\n Enter the size of Array: ");
	scanf(" %d", &size);

	printf("\n\n Enter the Values in Array: ");
	for( i = 0; i<size; ++i) {
		scanf(" %d", &arr[i]);
	}

	printf("\n\n Your Resulted Array is: ");
	for(i = 0; i<size; ++i) {
		printf(" %d", arr[i]);
	}

	printf("\n\n Enter the number to be Search: ");
	scanf(" %d" , &elem);

	for(i = 0; i<size; ++i){
		start = 1;
		if( arr[i] == elem) {
			flag = 1;
			printf("\n\nYour element is at index : %d", i+1);
		}
	};
	if(start == 0 && flag == 1) {
		printf("\n\nNo element found");
	}

	for(i = 0; i<size-1; ++i){
		for( j = 0; j<size-i-1; ++j) {
			if( arr[j] > arr[j+1] ){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}

	printf("\n\n Sorted Array : ");
	for(i = 0; i<size; ++i)
		printf(" %d", arr[i]);

	printf("\n\n Reverse Array : ");
	for(i = size-1; i>=0; --i) 
		printf(" %d", arr[i]);
	

	return 0;
}
