/* double を用いて (1.0 + 1.0/n)^n を計算して, e との誤差を調べる */
#include <stdio.h>
#include <math.h>
#define MAX (10)
double power(double k, unsigned long n) ;

int main(int argc, char **argv) {
  unsigned long n = 10UL ;
  double e ;
  for(int i=0;i<MAX;i++) {
    e = power(1.0+1.0/n, n) ;
    printf("%lu %.14e\n", n, fabs(e - M_E)) ;
    n *= 10 ;
  }
  return 0 ;
}

/* マジメに n 回の乗算を行う */
double power(double k, unsigned long n) {
  double x = 1.0 ;
  for(unsigned long i=0;i<n;i++) x *= k ;
  return x ;
}
