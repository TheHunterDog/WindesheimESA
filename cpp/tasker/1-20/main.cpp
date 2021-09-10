#include "iostream"
#include <map>
#include <vector>
// KUDOS: http://www.cplusplus.com/forum/general/28821/

void swap(int arr1[], int index1, int arr2[], int index2);
void sortArr(int arr[], int size);

const int ARRSIZE = 9;
const int MAXSUBARRAYSIZE = 3;

int main()
{
  int arr[ARRSIZE] = {1, 300, 4, 6, 4, 6, 8, 14, 246};
  sortArr(arr, ARRSIZE);
  for (int i = 0; i < ARRSIZE; i++)
  {
    std::cout << arr[i] << "\n";
  }

  return 0;
}

void sortArr(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {

    for (int i = 0; i < size; i++)
    {
      if (arr[i] > arr[i + 1])
      {
        swap(arr, i, arr, i + 1);
      }
      else if (arr[i] < arr[i - 1])
      {
        swap(arr, i, arr, i - 1);
      }
    }
  }
}

void swap(int arr1[], int index1, int arr2[], int index2)
{
  int TEMPVAL;
  TEMPVAL = arr1[index1];
  arr1[index1] = arr2[index2];
  arr2[index2] = TEMPVAL;
}