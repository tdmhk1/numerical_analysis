/* double を用いて (1.0 + 1.0/n)^n を計算して, e との誤差を調べる(ライブラリのpow関数を使うver) */
#include <stdio.h>
#include <math.h>
#define MAX (10)

int main(int argc, char **argv) {
  unsigned long n = 10UL ;
  double e ;
  for(int i=0;i<MAX;i++) {
    e = pow(1.0+1.0/n, n);
    printf("%lu %.14e\n", n, fabs(e - M_E)) ;
    n *= 10 ;
  }
  return 0 ;
}
