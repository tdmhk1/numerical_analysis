#include <stdio.h>
#include <math.h>
#define MAX (16)
double calc_exp(int n);

int main(int argc, char **argv) {
  double e;
  for(int i=1; i<MAX; i++) {
    e = calc_exp(i);
    printf("%2d %.14e %.14e\n", i, fabs(e - M_E), fabs(e - M_E) / e);
  }
  return 0;
}

// eの近似値をn次の項まで計算する
double calc_exp(int n) {
  double e = 1.0;
  while (n > 0) {
    e = e / n + 1;
    n--;
  }
  return e;
}
