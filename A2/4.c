//Write a program to swap odd positioned numbers with even positioned number in a array

#include <stdio.h>

int main(){
	int arr [] = {1,5,7,10,4,6,8};
	int n = sizeof(arr)/sizeof(arr[0]);
	int temp = 0;

	for(int i = 0; i<n-1; i+=2){
		temp = arr[i+1];
		arr[i+1] = arr[i];
		arr[i] = temp;
	}

	for(int i = 0; i<n; i++){
		printf("%d,", arr[i]);
	}
	
	return 0;
}