#include <stdio.h>

double global = 3;
float super_global = 5;
static float runtime = 2;

void foo();

void aa() {
  printf("Only accessible in this file\n");
}

int main(int argc, char const *argv[]) {
  int tmp = 2;
  register int a = 15;

  foo();
  printf("%.4f\n", global);
  printf("%.2f\n", super_global);
  printf("%.2f\n", runtime);
  printf("Register: %d\n", a);
  printf("Only accessible in main() function: %d\n", tmp);
  all();

  return 0;
}
