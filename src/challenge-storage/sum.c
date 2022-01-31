#include <stdio.h>

int sum(int num) {
  static int longlive = 0;
  longlive += num;

  return longlive;
}

int main(int argc, char const *argv[]) {
  printf("%d ", sum(25));
  printf("%d ", sum(15));
  printf("%d \n", sum(30));

  return 0;
}
