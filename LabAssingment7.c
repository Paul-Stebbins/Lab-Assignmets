#include <stdio.h>
void printArray(int arr[], int n)
{
  for (int i = 0; i < n; i++){
    printf("%d ", arr[i]);
  }
  printf("\n");
}
void swap(int *a, int *b){
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}

int bubbleSort(int array[], int n){
  int count=0, temp;
  int numSwapArray[n];
  for (int i = 0; i < n; i++){
    numSwapArray[i]=0;
  }
  for(int i=0; i<n;i++){
    for(int j=0; j<n-i-1;j++){
      if(array[j]>array[j+1]){
        swap(&array[j],&array[j+1]);
        count++;
        numSwapArray[i]++;
      }
    }
  }
  for(int i=0;i<n;i++){
    printf("element %d ",array[n-i-1]);
    printf("is swapped %d # of times\n", numSwapArray[i]);
  }
  printf("\nBubble Sorted Array\n");
  printArray(array, n);
  return count;
}
int selectionSort(int array[], int n){
  int count=0,i,j,minIndex,temp;
  int numSwapArray[n];
  for (int i = 0; i < n; i++){
    numSwapArray[i]=0;
  }
  for(int i=0; i<n-1;i++){
    minIndex=i;
    for(j=i+1;j<n;j++){
      if(array[j]<array[minIndex]){
        minIndex=j;
        swap(&array[i],&array[minIndex]);
        count++;
        numSwapArray[i]++;
      }
      
    }
  }
  for(int i=0;i<n;i++){
    printf("element %d ",array[n-i-1]);
    printf("is swapped %d # of times\n", numSwapArray[i]);
  }
  printf("\n Selection Sorted Array\n");
  printArray(array, n);
  return count/2;
}


int main(void) {
  int count=0;
  int array1[9]={97, 16, 45, 63, 13, 22, 7, 58, 72};
  int array2[9]={90, 80,  70,  60,  50,  40, 30,  20,  10};

  printf("\n Pre sorted array:  \n");
  printArray(array1, 9);
  printf("Total number of swaps is : %d\n", bubbleSort(array1, 9));
  printf("\n");
  printf("\n");
  printf("Pre sorted array:  \n");
  printArray(array2, 9);
  printf("Selection sorted array: \n");
  printf("Number of swaps is : %d\n", bubbleSort(array2, 9));



  int array3[9]={97, 16, 45, 63, 13, 22, 7, 58, 72};
  int array4[9]={90, 80,  70,  60,  50,  40, 30,  20,  10};
  
  
  printf("Pre sorted array:  \n");
  printArray(array3, 9);
  printf("Total number of swaps is : %d\n", selectionSort(array3, 9));
  printf("\n");
  printf("\n");
  printf("Pre sorted array:  \n");
  printArray(array4, 9);
  printf("Selection sorted array: \n");
  printf("Number of swaps is : %d\n", selectionSort(array4, 9));
  
  return 0;
}