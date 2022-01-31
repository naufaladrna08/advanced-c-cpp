
#include <stdio.h>
#include <malloc.h>

typedef struct {
  int size;
  int arr[];
} st;

int main(int argc, char const *argv[]) {
  int desiredSize = 0;

  printf("Enter size: ");
  scanf("%d", &desiredSize);

  st *s;
  s = malloc(sizeof(st) + desiredSize * sizeof(int));

  for (int i = 0; i < desiredSize; i++) {
    scanf("%d", &s->arr[i]);
  }

  for (int i = 0; i < desiredSize; i++) {
    printf("i[%d] => %d\n", i, s->arr[i]);
  }

  return 0;
}
