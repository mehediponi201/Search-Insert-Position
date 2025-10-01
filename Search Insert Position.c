/*
Input: nums = [1,3,5,6], target = 5
Output: 2
*/

#include<stdio.h>
int searchInsert(int* nums, int numsSize, int target)
{
    int left=0,right=numsSize-1;
    while(left<=right)
    {
        int mid = left + (right-left)/2;
        if(nums[mid] == target)
        {
            return mid;
        }
        else if(nums[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return left;
}
int main()
{
    int nums[] = {1,3,5,6};
    int len = sizeof(nums)/sizeof(nums[0]);
    int target = 2;
    int index = searchInsert(nums,len,target);
    printf("Index value is: %d",index);
}
