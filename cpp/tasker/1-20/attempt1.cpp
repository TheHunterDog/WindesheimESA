#include "iostream"
#include <map>
#include <vector>
// KUDOS: http://www.cplusplus.com/forum/general/28821/

void sortIntArray(int[], int);
void swap(int arr1[],int index1, int arr2[], int index2);
void swap(int arr1[],int index1, int destinyIndex, int val);
int * createArrayWithIntsInAsc(int value1, int value2, int value3,int *arr[]);


const int ARRSIZE = 9;
const int MAXSUBARRAYSIZE = 3;

int main()
{
  int arr[ARRSIZE] = {1,300,4,6,4,6,8,14,246};
  sortIntArray(arr,ARRSIZE);

  return 0;
}


void sortIntArray(int arr[], int size){
  int maxArraySizeModi = MAXSUBARRAYSIZE;
  // KUDOS: http://www.cplusplus.com/forum/general/28821/
  while (size % maxArraySizeModi != 0){
    maxArraySizeModi++;
  }

  if(MAXSUBARRAYSIZE != maxArraySizeModi){
    std::cout << "Working on sub array size" << maxArraySizeModi;
  }
  
  for (size_t i = MAXSUBARRAYSIZE - 1; i < size / maxArraySizeModi; i+= MAXSUBARRAYSIZE -1)
  {
    int SeqeunceArray[3] = {0,0,0};
    createArrayWithIntsInAsc(arr[i - 1],arr[i],arr[i+1], SeqeunceArray);
    for( ; i < 3; ++i ){
    printf("%d", SeqeunceArray[i]);  

    }      

    
  }
  
}

void swap(int arr1[],int index1, int arr2[], int index2){
  int TEMPVAL;
  TEMPVAL = arr1[index1];
  arr1[index1] = arr2[index2];
  arr2[index2] = TEMPVAL;
}

void swap(int arr1[],int index1, int destinyIndex, int val){
  int TEMPVAL;
  TEMPVAL = arr1[index1];
  arr1[index1] = val;
  arr1[destinyIndex] = TEMPVAL;
}

void createArrayWithIntsInAsc(int value1, int value2, int value3,int arraySorted[]){
// Kudos: https://www.tutorialspoint.com/cplusplus/cpp_return_arrays_from_functions.htm
  int count = 3;

  // int arraySorted[count] = {-256};
  int Highest;
  
  // if(value1 > value2 && value1 > value3){
    // Highest = value1;
  // }
  arraySorted[count-1] = value1;
  if(value2 > arraySorted[count-1]){
    arraySorted[count] = value2;
  }
  else{
    arraySorted[0] = value2;
  }
  if(arraySorted[count] != -256 && value3 > arraySorted[count]){
    swap(arraySorted,count-1,arraySorted,0);
    swap(arraySorted,count,count-1,value3);
  }
  if(value3 < arraySorted[count-1]){
    if(arraySorted[0] == -256){
      arraySorted[0] = value3;
    }
    else{
      swap(arraySorted,count,arraySorted,count-1);
      swap(arraySorted,0,arraySorted,count-1);
      arraySorted[0] = value3;
    }
  }
}
