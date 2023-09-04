#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
	int arr[] = {1, 3, 6, 2,4, 8, 7};
	
	for(int i =0;i<5;i++){
		for(int j=0;j<7-i-1;j++){
			if(arr[j]< arr[j+1])
			swap(arr[i], arr[j]);
		}
	}
	
	
	cout<<arr[7-5];
	return 0;
}
