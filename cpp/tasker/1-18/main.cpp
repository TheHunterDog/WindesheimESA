
void swap(int[],int, int[], int);

int main()
{
  int arr1[] = {1,2,3,4,5,6,7,8};
  int arr2[] = {8,7,6,5,4,3,2,1};

  swap(arr1,4,arr2,1);
  return 0;
}

void swap(int arr1[],int index1, int arr2[], int index2){
  int TEMPVAL;
  TEMPVAL = arr1[index1];
  arr1[index1] = arr2[index2];
  arr2[index2] = TEMPVAL;
}