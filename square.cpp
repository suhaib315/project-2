#include<iostream>
using namespace::std;
int helper(vector <int> nums,int x,int y,int target,int &indexValue)
{
    int mid=(x+y)/2;
    if(nums[mid]>target)
    {
        helper(nums,x,mid-1,target,indexValue);
    }
    else if(nums[mid]<target)
    {
        helper(nums,mid+1,y,target,indexValue);
    }
    else 
        indexValue=mid;
    return mid;
}
int main()
{
    int x=0;
    vector<int> nums{1,2,3,4,5,6,7,8,9};
    int y=nums.size()-1;
    int target=3;
    int indexValue=0;
    return helper(nums,x,y,target,indexValue);
}