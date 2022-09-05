#include <stdio.h>
#include <limits.h>
 
// Function to find the maximum product of two integers in an array
void findMaximumProduct(int arr[], int n)
{
    // for storing the maximum and second maximum element in an array
    int max1 = arr[0], max2 = INT_MIN;
 
    // for storing the minimum and second minimum element in an array
    int min1 = arr[0], min2 = INT_MAX;
 
    for (int i = 1; i < n; i++)
    {
        // if the current element is more than the maximum element,
        // update the maximum and second maximum element
        if (arr[i] > max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
 
        // if the current element is less than the maximum but greater than the
        // second maximum element, update the second maximum element
        else if (arr[i] > max2) {
            max2 = arr[i];
        }
 
        // if the current element is less than the minimum element,
        // update the minimum and the second minimum
        if (arr[i] < min1)
        {
            min2 = min1;
            min1 = arr[i];
        }
 
        // if the current element is more than the minimum but less than the
        // second minimum element, update the second minimum element
        else if (arr[i] < min2) {
            min2 = arr[i];
        }
 
        // otherwise, ignore the element
    }
 
    // choose the maximum of the following:
    // 1. Product of the maximum and second maximum element or
    // 2. Product of the minimum and second minimum element
    if (max1 * max2 > min1 * min2) {
        printf("Pair is (%d, %d)", max1, max2);
    }
    else {
        printf("Pair is (%d, %d)", min1, min2);
    }
}
 
int main()
{
    int arr[] = { -10, -3, 5, 6, -2 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    findMaximumProduct(arr, n);
 
    return 0;
}