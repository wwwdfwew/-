#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//void SLErase(int* nums, int pos, int numsSize)
//{
//    int begin = pos + 1;
//
//    while (begin < numsSize)
//    {
//        nums[begin - 1] = nums[begin];
//        begin++;
//    }
//
//}
//int removeElement(int* nums, int numsSize, int val) {
//    for (int i = 0;i < numsSize;i++)
//    {
//
//        if (nums[i] == val) {
//            SLErase(nums, i, numsSize);
//            numsSize--;
//            i = 0;
//        }
//
//    }
//    return numsSize;
//}
//int main()
//{
//    int nums[] = { 3,3 };
//    removeElement(nums, 2, 3);
//    
//       
//}

//int removeDuplicates(int* nums, int numsSize) {
//    int* str1 = nums;
//    int* str2 = nums;
//    int* str3 = nums;
//    while (numsSize)
//    {
//        if (*str1 != *str2)
//        {
//            str2++;
//            *str2 = *str1;
//            str1++;
//        }
//        else
//        {
//            str1++;
//        }
//        numsSize--;
//    }
//    return (int)(str2 - str3);
//}
//int main(){
//    int arr[] = { 1,1,2 };
//    removeDuplicates(arr, 3);
//}
//void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
//    int* str1 = nums1;
//    int* str2 = nums2;
//    while (nums1Size)
//    {
//        if (*str1 > *str2)
//        {
//            *(str1 + m) = *str1;
//            *str1 = *str2;
//            str2++;
//
//        }
//        else
//        {
//            if (*str1 != *str2) {
//                *(str1 + m) = *str2;
//                str2++;
//            }
//            str1++;
//        }
//        nums1Size--;
//    }
//
//}
//int main()
//{
//    int arr1[] = { 1,2,3,0,0,0 };
//    int arr2[] = { 2,5,6 };
//    merge(arr1, 6, 3, arr2, 3, 3);
//    for (int i = 0;i < 6;i++)
//        printf("%d ", arr1[i]);
//}

//int findClosestNumber(int* nums, int numsSize) {
//    unsigned int min = (unsigned int)nums[0];
//    for (int i = 0;i < numsSize;i++)
//    {
//        if (min > (unsigned int)nums[i])
//            min = (unsigned int)nums[i];
//    }
//    return min;
//}
//int main()
//{
//    int arr[] = { -10,-12,-54,-12,-544,-10000 };
//    findClosestNumber(arr, 6);
//}

//#include<stdlib.h>
//int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
//    int src = 1, dst = 0;
//    int* tap = (int*)malloc(sizeof(int) * 2);
//    while (src < numsSize)
//    {
//        if (nums[src] + nums[dst] == target)
//        {
//            tap[0] = src;
//            tap[1] = dst;
//            returnSize = tap;
//            break;
//        }
//        else
//        {
//            dst++;
//            src++;
//        }
//    }
//    return returnSize;
//}
//int main()
//{
//    int* returnSize = NULL;
//    int arr[] = { 2,7,11,15 };
//    twoSum(arr, 4, 9, returnSize);
//}

#include<stdlib.h>
void rotate(int* nums, int numsSize, int k) {
    int* nums1 = (int*)malloc(sizeof(int) * numsSize);
    int j = 0;
    int m = numsSize - k;
    for (int i = 0;i < k;i++)
    {
        nums1[i] = nums[m++];
    }
    for (int i = k;i < numsSize;i++)
    {
        nums1[i] = nums[j++];
    }
    nums = nums1;
    free(nums1);
}
int main()
{
    int arr[] = { 1,2,3,4,5,6,7 };
    int k = 3;
    rotate(arr, 7, 3);
    for (int i = 0;i < 7;i++)
    {
        printf("%d ", arr[i]);
    }
}