Given an unsorted integer array, find a pair with the given sum in it.

Input:
 
nums = [8, 7, 2, 5, 3, 1]
target = 10
 
Output:
 
Pair found (8, 2)
or
Pair found (7, 3)
 
 
Input:
 
nums = [5, 2, 6, 8, 1, 9]
target = 12
 
Output: Pair not found

The idea is to sort the given array in ascending order and maintain search space by maintaining two indices (low and high)
the indices initially points to two endpoints of the array.

Then `reduce the search space` nums[low…high] at each iteration of the loop by comparing the sum of elements present at indices
low and high with the desired sum.

Increment low if the sum is less than the expected sum; otherwise, decrement high if the
sum is more than the desired sum. If the pair is found, return it.

We can use a hash table to solve this problem in linear time.
The idea is to insert each array element nums[i] into a map.
We also check if difference (nums[i], target - nums[i]) already exists in the map or not.

If the difference is seen before, print the pair and return.

