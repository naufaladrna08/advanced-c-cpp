#include <stdio.h>

int move_number = 2;

void foo(void);

int main(int argc, char const *argv[]) {
  printf("%d\n", move_number);
  foo();
  printf("%d\n", move_number);
  
  return 0;
}
