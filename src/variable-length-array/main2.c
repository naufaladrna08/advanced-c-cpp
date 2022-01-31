#include <stdio.h>

void array(int size) {
  char alpha[size];

  for (int i = 0; i < size; i++) {
    alpha[i] = 'A' + i;
    printf("Alpha is %c\n", alpha[i]);
  }
}

int main(int argc, char const *argv[]) {
  array(10);

  return 0;
}
