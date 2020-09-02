#include <bits/stdc++.h>
using namespace std;
int partition(vector<int>& nums, int low, int high){
        int pivot=nums[high];
        int i=low-1;
        for(int j=low;j<high;j++){
            if(nums[j]<=pivot){
                i++;
                int tmp=nums[i];
                nums[i]=nums[j];
                nums[j]=tmp;
            }
        }
        int tmp=nums[i+1];
        nums[i+1]=nums[high];
        nums[high]=tmp;
        return (i+1);
    }
    
void quicksort(vector<int>& nums,int start,int end){
        if(start<end){
            int pivot=partition(nums,start,end);
            quicksort(nums,start,pivot-1);
            quicksort(nums,pivot+1,end);
        }
}

int main()
{
    vector<int>nums={2,5,4,3,6,7};      
    quicksort(nums,0,nums.size()-1);
    for(int j=0;j<nums.size();j++)
        cout<<nums[j]<<" ";
    return 0;
}
