#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int arr[] ={23, 56, 14, 36, 74 };
	
	int n= sizeof(arr)/sizeof(int);
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n-i;j++){
			if(arr[j]> arr[j+1]){
				swap(arr[j], arr[j+1]);
			}
		}
	}
	
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}	
	return 0;
}
