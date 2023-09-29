// You are using GCC
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    
    int size =5;
    float arr[] = {23,  26, 2 , 34, 14};
    
   
    
    for(int i=0; i<size; i++){
    	cout<<"After iteration "<<i+1<<": ";
        for(int j=0; j<size-i-1;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
		}
		
        for(int k=0; k<size; k++){
            cout<<arr[k]<<" ";
        }
        cout<<endl;
    }
    
    cout<<"Sorted array: ";
    for(int k=0; k<size; k++){
        cout<<arr[k]<<" ";
    }
    
    
    return 0;
}
