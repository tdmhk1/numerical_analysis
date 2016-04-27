#include <stdio.h>
#include <math.h>
#define MAX (16)

int main(int argc, char **argv) {
  double e = 1;
  int n = 1;
  for(int i=1; i<MAX; i++) {
    n *= i;
    e += 1.0 / n;
    printf("%2d %.14e\n", i, fabs(e - M_E));
  }
  return 0;
}
