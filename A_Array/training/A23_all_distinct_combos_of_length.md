For example,

Input:  {2, 3, 4}, k = 2
Output: {2, 3}, {2, 4}, {3, 4}
 
 
Input:  {1, 2, 1}, k = 2
Output: {1, 2}, {1, 1}, {2, 1}
The program should print all the distinct combinations,
while preserving the relative order of elements as they appear in the array.

Practice this problem

 
We can use recursion to solve this problem. The idea is to add each element to the output and recur
for the remaining items with one less element. To avoid printing permutations, construct each tuple
in the same order as array elements. Then if the combination of the given size is found, print it.