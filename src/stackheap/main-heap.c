#include <stdio.h>
#include <stdlib.h>

double *multiple_by_2(double *input) {
  /* Allocate Heap */
  double *twice = malloc(sizeof(double));
  *twice = *input * 2.0f;
  return twice;
}

int main(int argc, char const *argv[]) {
  int *age = malloc(sizeof(int));
  *age = 30;
  double *salary = malloc(sizeof(double));
  *salary = 12345.67;
  double *myList = malloc(3 * sizeof(double));
  myList[0] = 1.2;
  myList[1] = 2.3;
  myList[2] = 3.4;
  double *twiceSalary = multiple_by_2(salary);

  printf("Double your salary: %.3f\n", *twiceSalary);
  
  free(age);
  free(salary);
  free(myList);
  free(twiceSalary);

  return 0;
}