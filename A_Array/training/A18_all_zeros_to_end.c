#include <stdio.h>
 
// Function to move all zeros present in an array to the end
void reorder(int A[], int n)
{
    // `k` stores the index of the next available position
    int k = 0;
 
    // do for each element
    for (int i = 0; i < n; i++)
    {
        // if the current element is non-zero, put the element at the
        // next free position in the array
        if (A[i] != 0) {
            A[k++] = A[i];
        }
    }
 
    // move all 0's to the end of the array (remaining indices)
    for (int i = k; i < n; i++) {
        A[i] = 0;
    }
}
 
void swap(int A[], int i, int j)
{
    int temp = A[i];
    A[i] = A[j];
    A[j] = temp;
}
 
// Function to move all zeros present in an array to the end
void partition(int A[], int n)
{
    int j = 0;
 
    // each time we encounter a non-zero, `j` is incremented, and
    // the element is placed before the pivot
    for (int i = 0; i < n; i++)
    {
        if (A[i] != 0)        // pivot is 0
        {
            swap(A, i, j);
            j++;
        }
    }
}
 
int main(void)
{
    int A[] = { 6, 0, 8, 2, 3, 0, 4, 0, 1 };
    int B[] = { 6, 0, 8, 2, 3, 0, 4, 0, 1 };
    int n = sizeof(A) / sizeof(A[0]);
 
    reorder(A, n);
 
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
    partition(B, n);
    for (int i = 0; i < n; i++) {
        printf("%d ", B[i]);
    }
    return 0;
}