// #include <stdio.h>

/*
704. BINARY SEARCH

Given an array of integers nums which is sorted in ascending order, and an integer target, write a function to search target in nums. If target exists, then return its index. Otherwise, return -1.

You must write an algorithm with O(log n) runtime complexity.



Example 1:

Input: nums = [-1,0,3,5,9,12], target = 9
Output: 4
Explanation: 9 exists in nums and its index is 4

Example 2:

Input: nums = [-1,0,3,5,9,12], target = 2
Output: -1
Explanation: 2 does not exist in nums so return -1



Constraints:

    1 <= nums.length <= 104
    -104 < nums[i], target < 104
    All the integers in nums are unique.
    nums is sorted in ascending order.


*/


int search(int array[], int array_size, int target) {
    int low = 0;
    int high = array_size - 1;
    int count = 0;

    while (low <= high) {
        count++;
        int mid  = (low + high) / 2;
        int item = array[mid];

        if (item == target){
            return mid;
        }
        else if (item > target) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return -1;
}

// Function main to execute this code and test

// int main() {
//     int nums_array[] = {1,2,3,4,5,8,9,0};
//     int array_len = sizeof(nums_array) / sizeof(nums_array[0]);
//     int target = 9;
//     printf("%d\n", search(nums_array, array_len, target));
// }
