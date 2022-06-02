#include <stdio.h>

void swap(int list[], int i, int j) {
  int hold = list[i];
  list[i] = list[j];
  list[j] = hold;
}

int getSmallest(int list[], int lo, int hi) {
  int small = lo;
  
  for (size_t h = lo + 1; h <= hi; h++)
    if (list[h] < list[small]) small = h;
  
  return small;
}

void selectionSort(int list[], int lo, int hi) {
  for (size_t h = lo; h < hi; h++) {
    int s = getSmallest(list, h, hi);
    swap(list, h, s);
  }
}

int main(int argc, char const *argv[]) {
  int num[7] = { 57, 48, 79, 65, 15, 33, 52 };
  selectionSort(num, 0, 7 - 1);

  for (int i = 0; i < 7; i++) {
    printf("%d ", num[i]);
  }

  printf("\n");

  return 0;
}
