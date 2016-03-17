#include<iostream>
#include<stdio.h>
#include<string.h>
#include<vector>

using namespace std;

int findMin(vector<int>& nums) {
    	int first=0;
    	int end=nums.size()-1;
	    int mid=0;
	    if(nums.size()==1){
	        return nums[0];
	    }
	    while(first<end){
		    if(nums[mid]>nums[end]){
		        first=mid+1;
		    }else if(nums[mid]<nums[end]){
			    end=mid;
			}else{
				end--;
			}
			mid=(first+end)/2;
	    }
		return mid;
  }

void main(){
//	int a[]={3,3,3,4,1,1};
	int a[]={4,1,4,4,4};
	vector<int> nums(a,a+sizeof(a)/sizeof(int));
	int result=findMin(nums);
	cout<<"the result is:"<<result<<endl;
	system("pause");
}