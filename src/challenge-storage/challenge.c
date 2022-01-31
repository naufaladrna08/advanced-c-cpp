#include <stdio.h>

int main(int argc, char const *argv[]) {
  size_t size = 0, result = 0;

  printf("Enter the number of elements you want to store: ");
  scanf("%zd", &size);

  int arr[size];

  for (int i = 0; i < size; i++) {
    scanf("%d", &arr[i]);
    result += arr[i];
  }

  printf("The result is %ld\n", result);

  return 0;
}