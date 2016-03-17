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
		    }else{
			    end=mid;
			}
			mid=(first+end)/2;
	    }
		return mid;
  }

void main(){
	int a[]={5,6,7,0,1,2,3,4};
//	int a[]={2,1};
	vector<int> nums(a,a+sizeof(a)/sizeof(int));
	int result=findMin(nums);
	cout<<"the result is:"<<result<<endl;
	system("pause");
}
