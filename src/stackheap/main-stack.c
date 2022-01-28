#include <stdio.h>

double multiple_by_2(double input) {
  /* Data pushed onto Stack */
  double twice = input * 2.0f;
  return twice;
  /* Data popped onto Stack */
}

int main(int argc, char const *argv[]) {
  /* Data pushed onto Stack */
  int age = 30;
  double salary = 12345.67;
  double myList[3] = {1.2, 2.3, 3.4};
  /* Data popped onto Stack */

  printf("double your salary is %.3f\n", multiple_by_2(salary));

  return 0;
}
