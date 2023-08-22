#include<iostream>

using namespace std;

int findMaxArea(int height[]){
	int left = 0;
	int right = sizeof(height)/sizeof(height[0]) - 1;
	
	
	while(left<right){
		int h = min(height[left] , height[right]);
		
		int w = right - left;
		int area = h*w;
		int maxArea = max(area, maxArea);
		
		
		if(height[left]< height[right]){
			left++;
		}else{
			right--;
		}
		return maxArea;
	}
	
}

int main(){
	
	int height[] = {1,8,6,2,5,4,8,3,7};
	
	int max = findMaxArea(height);
	cout<<max;
	
	
	return 0;
}
