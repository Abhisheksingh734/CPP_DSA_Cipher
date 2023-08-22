#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int getMaxInd(int arr[], int start, int end){
	int max = start;
	for(int i=start; i<=end; i++){
		if(arr[max]< arr[i]){
			max =i;
		}
	}
	return max;
}

int main(){
	
	int arr[] ={23, 56, 14, 36, 74 };
	
	int n= sizeof(arr)/sizeof(int);
	
	
	for(int i=0; i<n; i++){
		int last = n - i -1;
		int maxInd = getMaxInd(arr, 0, last);
		swap(arr[maxInd], arr[last]);
		
	}
	
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}	
	return 0;
}




