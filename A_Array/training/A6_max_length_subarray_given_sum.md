nums[] = { 5, 6, -5, 5, 3, 5, 3, -2, 0 }
target = 8
 
 
Subarrays with sum 8 are
 
{ -5, 5, 3, 5 }
{ 3, 5 }
{ 5, 3 }
 
The longest subarray is { -5, 5, 3, 5 } having length 4

The problem differs from the problem of finding the maximum length subsequence with given sum. Unlike subsequences, subarrays are required to occupy consecutive positions within the original array.

 
A naive solution is to consider all subarrays and find their sum. If the subarray sum is equal to the given sum, update the maximum length subarray. The time complexity of the naive solution is O(n3) as there are n2 subarrays in an array of size n, and it takes O(n) time to find the sum of its elements. We can optimize the method to run in O(n2) time by calculating the subarray sum in constant time.

Following is the implementation in C, Java, and Python based on the above idea:

We can use a map to solve this problem in linear time. The idea is to create an empty map to store the first subarray’s ending index, having a given sum. We traverse the given array and maintain the sum of elements seen so far.

If the target is seen for the first time, insert the sum with its index into the map.
If target-S is seen before, there is a subarray with the given sum that ends at the current index, and we update the maximum length subarray having sum S if the current subarray has more length.