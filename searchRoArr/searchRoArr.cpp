#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int search(int nums[],int n, int target)
{
	int mid=0;
       int first=0,last=n-1;
       while(first<=last)
       {
           mid=(first+last)/2;
           if(nums[mid]==target)
           {
               return mid;
           }
           else if(nums[first]<=nums[mid])
           {
               if(target<nums[mid] && target>=nums[first])
               {
                   last=mid-1;
               }
               else
               {
                   first=mid+1;
               }
           }
           else
           {
               if(target>nums[mid] && target<=nums[last])
               {
                   first=mid+1; //{5,1,2,3,4} target=4
               }else
               {
                   last=mid-1;
               }
           }
		   cout<<"first:"<<first<<endl;
		   cout<<"mid:"<<mid<<endl;
           cout<<"last:"<<last<<endl;
       }
       return -1;
}

void main()
{
	int a[]={5,1,2,3,4};
    int index;
	index=search(a,5,5);
	cout<<"the result is:"<<index<<endl;
	system("pause");
}