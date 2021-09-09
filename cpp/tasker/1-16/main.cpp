#include "iostream"
void printArr(int[], int);

int main()
{
  int arr[] = {1,3,5,6,7,5,3,1,2};
  printArr(arr,(sizeof(arr)/sizeof(arr[0])));
  // Kudos https://www.educative.io/edpresso/how-to-find-the-length-of-an-array-in-cpp
  return 0;
}

void printArr(int arr[], int size){
  for (int i = 0; i < size; i++)
  {
    std::cout << i << " : " << arr[i] << "\n";
  }
  
}