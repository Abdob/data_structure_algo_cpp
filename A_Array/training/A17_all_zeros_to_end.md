Given an integer array, move all zeros present in it to the end.

The solution should maintain the relative order of items in the array and should not use constant space.

For example,

Input:  { 6, 0, 8, 2, 3, 0, 4, 0, 1 }
 
Output: { 6, 8, 2, 3, 4, 1, 0, 0, 0 }

Using partitioning logic of Quicksort
We can also solve this problem in one scan of the array by modifying Quicksort’s
partitioning logic. The idea is to use 0 as a pivot element and make one pass
of the partition process. The partitioning logic reads all elements and swap
every non-pivot element with the first occurrence of the pivot.
