#include<iostream>
using namespace std;



/*
n = 5
arr = [ 2, 5, 1, 4, 6]
even position element sorted in ascending order
odd position element sorted in descending order
even: 4, 5
odd: 6, 2, 1

output= [6, 4, 2, 5, 1]

*/

int insertionSort(int arr[], int size){
	
	for(int i=1; i<size-1;i++){
		int key = arr[i];
		int j = i-1;
		
		while(j>=0&& key < arr[j]){
			arr[j+1] = arr[j];
			j--;
		}
		
		a[j+1] = key;
	}
}

int insertioonSort(int arr[], int size){
	
	for(int i=0;i<size-2;i++){
		for(int j=i+1;j>0;j--){
			if(arr[j] > arr[j-1]){
				swap(arr[j], arr[j-1]);
			}else{
				break;
				
			}
		}
	}
	
	return arr[size];
	
} 




int main(){
	int n =5;
	int arr[] = {2, 5, 1, 4 ,6};
	
	int arr1[n], arr2[n];
	
	for(int i=0; i<n; i++){
		
	}
	
	
	
	
	return 0;
}
