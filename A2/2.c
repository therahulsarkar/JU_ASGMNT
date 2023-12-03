//Write a program to find minimum and maximum of an array

#include <stdio.h>
#include <limits.h>

int main(){
	int arr [] = {1,5,7,10,4,6};
	int n = sizeof(arr)/sizeof(arr[0]);
	int MAX = INT_MIN;
	int MIN = INT_MAX;

	for(int i = 0; i<n; i++){
		if(arr[i] > MAX){
			MAX = arr[i];
		}
		if(arr[i] < MIN){
			MIN = arr[i];
		}
	}

	printf("Maximum element is %d", MAX);
	printf("Minimum element is %d", MIN);

	return 0;
}