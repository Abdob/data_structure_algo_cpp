#include <iostream>
#include <algorithm>
using namespace std;
 
// Function to find a pair in an array with a given sum using sorting
void findPair(int nums[], int n, int target)
{
    // sort the array in ascending order
    sort(nums, nums + n);
 
    // maintain two indices pointing to endpoints of the array
    int low = 0;
    int high = n - 1;
 
    // reduce the search space `nums[low…high]` at each iteration of the loop
 
    // loop till the search space is exhausted
    while (low < high)
    {
        // sum found
        if (nums[low] + nums[high] == target)
        {
            cout << "Pair found (" << nums[low] << ", " << nums[high] << ")\n";
            return;
        }
 
        // increment `low` index if the total is less than the desired sum;
        // decrement `high` index if the total is more than the desired sum
        (nums[low] + nums[high] < target)? low++: high--;
    }
 
    // we reach here if the pair is not found
    cout << "Pair not found";
}
#include <unordered_map>
// Function to find a pair in an array with a given sum using hashing
void findPair2(int nums[], int n, int target)
{
    // create an empty map
    unordered_map<int, int> map;
 
    // do for each element
    for (int i = 0; i < n; i++)
    {
        // check if pair (nums[i], target - nums[i]) exists
 
        // if the difference is seen before, print the pair
        if (map.find(target - nums[i]) != map.end())
        {
            cout << "Pair found (" << nums[map[target - nums[i]]] << ", "
                 << nums[i] << ")\n";
            return;
        }
 
        // store index of the current element in the map
        map[nums[i]] = i;
    }
 
    // we reach here if the pair is not found
    cout << "Pair not found";
}

int main()
{
    int nums[] = { 8, 7, 2, 5, 3, 1 };
    int target = 10;
 
    int n = sizeof(nums)/sizeof(nums[0]);
 
    findPair(nums, n, target);
    findPair2(nums, n, target);
 
    return 0;
}