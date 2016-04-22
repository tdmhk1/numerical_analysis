/* double を用いて (1.0 + 1.0/n)^n を計算して, e との誤差を調べる (高速べき乗法)*/
#include <stdio.h>
#include <math.h>
#define MAX (10)
double power(double k, unsigned long n) ;

int main(int argc, char **argv) {
  unsigned long n = 10UL ;
  double e ;
  for(int i=0;i<MAX;i++) {
    e = power(1.0+1.0/n, n) ;
    // printf("%lu %.14e\n", n, e) ;
    printf("%lu %.14e\n", n, fabs(e - M_E)) ;
    n *= 10 ;
  }
  return 0 ;
}

/* 高速べき乗法 */
double power(double k, unsigned long n) {
  double x = 1 ;
  double y = k ;
  while(n > 0) {
    if (n % 2 == 1) {
      x *= y ;
    }
    y *= y ;
    n /= 2 ;
  }
  return x ;
}
