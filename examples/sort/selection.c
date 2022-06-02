#include <stdio.h>

int getSmallest(int arr[], int size, int start) {
  int low = arr[0];
  int index = 0;

  for (int i = start; i < size - 1; i++) {
    if (low > arr[i + 1]) {
      low = arr[i + 1];
      index = i + 1;
    } 
  }

  return index;
}

void swap(int arr[], int x, int y) {
  int tmp = arr[x];
  arr[x] = arr[y];
  arr[y] = tmp;
}

void selectionSort(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    int low = getSmallest(arr, size, i+1);
    swap(arr, i, low);
  }
}

int main(int argc, char const *argv[]) {
  int num[7] = { 57, 48, 79, 65, 15, 33, 52 };
  selectionSort(num, 7);

  for (int i = 0; i < 7; i++) {
    printf("%d ", num[i]);
  }

  printf("\n");

  return 0;
}