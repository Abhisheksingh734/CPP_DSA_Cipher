#include<iostream>

using namespace std;

int binarySearch(int arr[], int target, int size){
    int start = 0;
    int end = size-1;
    int result = -1;
    
    while(start<=end){
        int mid = start + (end - start);
        
        if(target < arr[mid]){
            result = arr[mid];
            end = mid -1;
        }else {
            start = mid +1;
        }
        
    }
    
    int smallestInteger = target+1;
    
    for(int i=start; i<size; i++){
        if(arr[i] != smallestInteger){
            return target+1;
        }else{
            smallestInteger++;
        }
    }
    return smallestInteger;
    
    
}

int main(){
    int size;
    cin>>size;
    
    int arr[size];
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    
    int x;
    cin>>x;
    
    int index = binarySearch(arr, x, size);
    cout<<"The smallest missing positive integer greater than "<<x<<" is "<<index<<".";
    
    return 0;
}
