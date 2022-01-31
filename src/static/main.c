/**
 * Data dalam variable statis tidak akan berubah
 * selama program berjalan.
 */

#include <stdio.h>

int call() {
  static int i = 0;
  return i++;
}

int main(int argc, char const *argv[]) {
  printf("%d\n", call());
  printf("%d\n", call());
  printf("%d\n", call());

  return 0;
}
