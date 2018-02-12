#include <stdio.h>

void mergesort(int a[], int left, int right);

void main(){
  int array[] = {3,2,5,6,1,4,4,3,2,4,5,5,543,3453,532,223,1,98,23};
  int size = *(&array + 1) - array;
  int left = 0;
  int right = size - 1;

  mergesort(array, left, right);
  for(int i=0; i < size; ++i)
    printf("%d\n",array[i]);
}

void mergesort(int a[], int left, int right){
  int mid,i,j;
  int temp[right-left+1],k = 0;

  if (left == right){
    return;
  }
  mid = (left + right) / 2;
  mergesort(a, left, mid);
  mergesort(a, mid+1, right);

  i = left;
  j = mid + 1;
  while (i <= mid && j <= right){
    if (a[i] < a[j]){
      temp[k] = a[i];
      ++i;
    }else{
      temp[k] = a[j];
      ++j;
    }
    ++k;
  }
  while (i <= mid){
    temp[k] = a[i];
    ++i;
    ++k;
  }
  while (j <= right){
    temp[k] = a[j];
    ++j;
    ++k;
  }
  for (int n=0; n <=right-left; ++n){
    a[left+n] = temp[n];
  }
}
