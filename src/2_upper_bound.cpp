#include "searching_algorithms.h"

/*
Given a vector of integers and a target element, 
return the right most index of target element,
if element does not exist return -1
*/
int _upper_bound(vector<int> nums, int target){
    int low = 0;
    int high = nums.size() - 1;
    int ans = -1;

    while(low <= high){
        int mid = (low + high) / 2;

        if(target < nums[mid])
            high = mid-1;
        else if(target > nums[mid])
            low = mid+1;
        else{
            ans = mid;
            low = mid+1;
        }
    }

    return ans;
}