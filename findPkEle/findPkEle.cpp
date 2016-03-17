#include<iostream>
#include<stdio.h>
#include<string.h>
#include<vector>

using namespace std;

int findPeakElement(vector<int>& nums) {
	int first=0;
	int end=nums.size()-1;
    int mid=0;
	if(nums.size()==1||nums[first]>nums[first+1]){
		return first;
	}
	if(nums[end]>nums[end-1]){
		return end;
	}
	while(first<=end){
		mid=(first+end)/2;
		if(nums[mid]>nums[mid-1]&&nums[mid]>nums[mid+1]){
			break;
		}else{
			if(nums[mid]<nums[mid-1]){
				end=mid-1;
			}else{
				first=mid+1;
			}
		}
		
	}
	return mid;
}

void main(){
	int a[]={4,3,4};
    vector<int> vec(a,a+ sizeof(a)/sizeof(int));
	int result=findPeakElement(vec);
	cout<<"the result is:"<<result<<endl;
//	system("pause");
}