/*
n = 5
arr = [ 2, 5, 1, 4, 6]
even position element sorted in ascending order
odd position element sorted in descending order
even: 4, 5
odd: 6, 2, 1

output= [6, 4, 2, 5, 1]

*/

#include<iostream>
#include<vector>
using namespace std;

void insertionSort(vector<int> & arr, int size){
    for(int i =1; i<size; i++){
        int key = arr[i];
        int j = i-1;
        
        while( j>=0 && key < arr[j]){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

int main(){    

    int size = 5;
    int arr[] = {2, 5, 1, 4, 6};
    
    vector<int> v1;
    vector<int> v2;
    // for even
    for(int i=0; i<size; i+=2){
        v1.push_back(arr[i]);
    }
    //for odd
    for(int i=1; i<size; i+=2){
        v2.push_back(arr[i]);
    }
    
    insertionSort(v1, v1.size());
    insertionSort(v2, v2.size());
    
    for(int i=0; i<v1.size()/2; i++){
        swap(v1[i], v1[v1.size()- 1 -i]);
    }
    
    
    int oddInd = 0;
    int evenInd = 0;
    
    for( int i=0; i< size;i++){
        if(i%2==0){
            arr[i] = v1[evenInd];
            evenInd++;
        }else{
            arr[i] = v2[oddInd];
            oddInd++;
        }
    }
    for(int i=0; i<size;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
