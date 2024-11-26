/*
TWO SUM - 001

Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

 

Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

Example 2:

Input: nums = [3,2,4], target = 6
Output: [1,2]

Example 3:

Input: nums = [3,3], target = 6
Output: [0,1]

 

Constraints:

    2 <= nums.length <= 104
    -109 <= nums[i] <= 109
    -109 <= target <= 109
    Only one valid answer exists.

*/

/*
    Rust code:
    
    impl Solution {
        pub fn two_sum(nums: Vec<i32>, target: i32) -> Vec<i32> {
            use std::collections::HashMap;
            let mut hashmap = HashMap::new();
            for (index, &num) in nums.iter().enumerate() {
                if let Some(&a) = hashmap.get(&(target- num)) {
                    return vec![a as i32, index as i32];
                }
                hashmap.insert(num, index);
            }
        vec![]
    }
    }
*/




//  Complexity O(n²)

#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int* result = (int*)malloc(2 * sizeof(int));
    
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
                *returnSize = 2;
                return result;
            }
        }
    }
    return result;
}

int main() {
    int nums[] = {3,3};
    int target = 6;
    int returnSize;
    
    int* result = twoSum(nums, 4, target, &returnSize);
    
    if (result != NULL) {
        printf("Indices: [%d, %d]\n", result[0], result[1]);
        free(result);  // Liberar a memória alocada
    } else {
        printf("No solution found\n");
    }

    return 0;
}


//   Complexity O(n)

// Todo: implements with HashMap