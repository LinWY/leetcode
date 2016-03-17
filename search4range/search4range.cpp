#include<iostream>
#include<algorithm>  
#include<functional>  
#include<vector> 

using namespace std;

vector<int> searchRange(vector<int>& nums, int target) {

        int a[2]={-1,-1};
        int lower=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        int upper=upper_bound(nums.begin(),nums.end(),target)-nums.begin()-1;
        if(lower<nums.size()&&target>=nums[0]&&target==nums[lower]){
            a[0]=lower;
            a[1]=upper;
        }

        vector<int> vect(a,a+ sizeof(a)/sizeof(int));
        return vect;
    }
void main(){
	int a[]={1,5};
    vector<int> vec(a,a+ sizeof(a)/sizeof(int));
    int lower=lower_bound(vec.begin(),vec.end(),0)-vec.begin();
	vector<int> test=searchRange(vec,4);
	cout<<"the first result is:"<<test[0]<<endl;
	cout<<"the end result is:"<<test[1]<<endl;
	system("pause");
}