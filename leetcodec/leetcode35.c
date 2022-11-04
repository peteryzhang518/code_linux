/*给定一个排序数组和一个目标值，在数组中找到目标值，并返回其索引。如果目标值不存在于数组中，返回它将会被按顺序插入的位置。

请必须使用时间复杂度为 O(log n) 的算法。

 

示例 1:

输入: nums = [1,3,5,6], target = 5
输出: 2
示例 2:

输入: nums = [1,3,5,6], target = 2
输出: 1
示例 3:

输入: nums = [1,3,5,6], target = 7
输出: 4

来源：力扣（LeetCode）
链接：https://leetcode.cn/problems/search-insert-position
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。*/

#include <stdio.h>
#include <stdlib.h>


int searchInsert(int* nums, int numsSize, int target){
    int top =0 ; int bottom = numsSize-1; int result = 0; int mid = 0;

//different  :  why is < =
    while (top < bottom){                                           

//different : why is (bottom-top)/2+top  
        mid = (bottom-top)/2;
        if(*(nums+mid)>target){

//different : why is mid -1 
            bottom = mid;
        }else{

//different : why is mid + 1
            top = mid;
        }
    }     
    result =mid;
}

int main(){
    int temp[4]={1,3,5,6};
    int result = searchInsert(temp, 4, 5);

    printf("result = %d\n", result);
    return 0;
}
