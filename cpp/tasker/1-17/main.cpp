#include "iostream"

const int ARR_SIZE = 5;

int getbiggestNum(int[], int);
int findNum(int[], int, int);

int main()
{
  int arr[ARR_SIZE] = {3, 4, 2, 8, 1};
  std::cout << "The biggest number inside of the array is : " << getbiggestNum(arr, ARR_SIZE) << "\n";
  // Checking if 1 is inside of array
  std::cout << "Number 1 is located at index : " << findNum(arr, ARR_SIZE, 1) << "\n";
  return 0;
}
/**
 * @brief 
 * getbiggestNum finds the largest number above 0
 * @param int-arr Array with numbers
 * @param int-size  Size of the array
 */
int getbiggestNum(int arr[], int size)
{
  int big = 0;
  for (int i = 0; i < size; i++)
  {
    if (arr[i] > big)
    {
      big = arr[i];
    }
  }
  return big;
}

int findNum(int arr[], int size, int target)
{
  for (int i = 0; i < size; i++)
  {
    if (arr[i] == target)
    {
      return i;
    }
  }
  return -1;
}