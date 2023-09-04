#include <bits/stdc++.h>
using namespace std;

int main() {


int arr[] = {5,1,2,3,6};
int n = 5;

// selection sort with min swaps in worst case
for(int i=0; i<n-1; i++){

int ele = arr[i];
int idx = i;

for(int j=i+1; j<n; j++){

if(arr[j] < ele ){
ele = arr[j];
idx = j;
}

}

swap(arr[i], arr[idx]);
}

for(int i=0; i<n; i++)
cout<<arr[i]<<" ";

return 0;
}
