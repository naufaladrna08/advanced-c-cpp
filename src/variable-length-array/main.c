#include <stdio.h>

int main(int argc, char const *argv[]) {
  size_t size = 0;

  printf("Enter the number of elements you want to store: ");
  scanf("%zd", &size);

  float values[size];

  return 0;
}