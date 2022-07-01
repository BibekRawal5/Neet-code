#include <stdio.h>
#include <stdbool.h>

bool containsDuplicate(int* nums, int numsSize){
    int i;
    int j;
    for(i = 0; i < numsSize; i++)
    {
        for(j = 0; j < numsSize; j++)
        {
            if(nums[i] == nums[j] && i != j)
                return true;
    
        }
    }
    return false;

}

int main(){
    int arr[] = {1, 2, 3, 1};
    int numsSize = sizeof(arr)/sizeof(arr[0]);
    if(containsDuplicate(arr, numsSize) == true)
        printf("Array contains duplicate.\n");

    else
        printf("Array does not contain duplicate.\n");

}