/* Finding duplicate in array if there is more than one duplicate */

/*
 * Method 1: Using two for loops with time complexity = O(n^2), space complexity O(1)
 * Method 2: Use temporary array to maintain track of repeated elements , time complexity = O(n), space complexity O(n)
 * Method 3: User array elements as index and mark them negative if >=0. Time = O(n) and Space O(1). 
 *           THIS METHOD MODIFIES ORIGINAL ARRAY. Method 3 implemented below.
 */

#include <stdio.h>
#include <stdlib.h>

void printRepeating(int arr[], int size)
{
  int i;
  printf("The repeating elements are: \n");
  for (i = 0; i < size; i++)
  {
    if (arr[abs(arr[i])] >= 0) 
      arr[abs(arr[i])] = -arr[abs(arr[i])];
    else
      printf(" %d ", abs(arr[i]));
  }
}
 
int main()
{
  int arr[] = {1, 2, 3, 1, 3, 6, 6};
  int arr_size = sizeof(arr)/sizeof(arr[0]);
  printRepeating(arr, arr_size);
  printf("\n");
  return 0;
}