/* double を用いて (1.0 + 1.0/n)^n を計算して, e との誤差を調べる (高速べき乗法)*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX (10)
double power(double k, unsigned long n) ;

int main(int argc, char const *argv[]) {
  double k = 0.0;
  unsigned long n = 0;
  if (argc > 2) {
    k = atof(argv[1]);
    n = atoi(argv[2]);
  }
  printf("%.14e\n", power(k, n)) ;
  return 0;
}

/* 高速べき乗法 */
double power(double k, unsigned long n) {
  if (n == 0) {
    return 1 ;
  }
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
