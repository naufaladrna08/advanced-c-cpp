#include <stdio.h>

typedef struct {
  float x, y, z;
} vec3f;

int main(int argc, char const *argv[]) {
  vec3f direction = {
    .x = 0.0f,
    .y = 0.0f,
    .z = 10.0f
  };
  
  int arr[10] = {
    [0] = 10,
    [1 ... 9] = 5
  };

  for (int i = 0; i < 10; i++) {
    printf("%d ", arr[i]);
  }

  printf("\n");
  return 0;
}
