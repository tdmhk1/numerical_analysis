/* 二分法を用いて Sqrt(2) の値を計算する */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define EPSILON (4.0E-16)
double calc_sqrt(double x) ;

int main(int argc, char **argv) {
  if (argc > 1) printf("%.15e\n", calc_sqrt(atof(argv[1]))) ;
  return 0 ;
}

double calc_sqrt(double x) {
  double lower, upper, square_root ;
  lower = 0.0 ;
  upper = x ;
  square_root = x ;
  while(fabs(lower-upper) > EPSILON*fabs(square_root)) {
    square_root = (lower + upper)/2.0 ;
    if (square_root*square_root > x) upper = square_root ;
    else lower = square_root ;
    printf("%e %e\n", fabs(lower - upper), fabs((lower - upper)/square_root)) ;
  }
  return square_root ;
}
