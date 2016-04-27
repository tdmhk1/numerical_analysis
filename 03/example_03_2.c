#include <stdio.h>
#include <math.h>
#define MAX (16)
double calc_exp(int n);

int main(int argc, char **argv) {
  double e;
  for(int i=1; i<MAX; i++) {
    e = calc_exp(i);
    printf("%2d %.14e\n", i, fabs(e - M_E));
  }
  return 0;
}

double calc_exp(int n) {
  double e = 1.0;
  while (n > 1) {
    e /= n;
    e += 1;
    n--;
  }
  e += 1;
  return e;
}
