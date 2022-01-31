/*
 * Lu cuma bisa naruh flexible array member pada
 * akhir member dari struct. Nggak bisa lebih dari
 * satu flexible array member dalam satu struct.
 * Nggak bisa cuma ada flexible array member dalam
 * suatu struct. Struktur yang mempunya flexible
 * array member tidak bisa menjadi member dalam
 * struktur lain. Harus dialokasikan secara dynamic
 * oleh malloc()
 */

#include <stdio.h>
#include <malloc.h>

typedef struct {
  int size;
  int arr[];
} st;

int main(int argc, char const *argv[]) {
  int desiredSize = 6;
  st *s;

  /* 
   * - sizeof() pada struct mengembalikan total dari seluruh
   * ukuran members dalam struktur tersebut dalam bytes.
   * - desired * sizeof(int) adalah untuk flexible array mem-
   * ber.
   */
  s = malloc(sizeof(st) + desiredSize * sizeof(int));

  return 0;
}
