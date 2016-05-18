// 円周率の近似値をマチンの公式を用いて計算する
#include <stdio.h>
#include <math.h>
double arctan(double x, int n);
double power(double k, unsigned long n);

int main(int argc, char **argv) {
  // 絶対誤差10^(-12)に対して、必要な計算回数は以下の通りになる。
  double p = 4 * (4 * arctan(1.0/5.0, 10) - arctan(1.0/239.0, 3));
  printf("%.14e\n", fabs(p - M_PI));
  return 0;
}

/* arctanのテイラー展開をn次の項まで計算する
 * |x| < 1, nは自然数
 */
double arctan(double x, int n) {
  double result = 0.0;
  int sign = 1;
  for (int i = 0; i < n; i++) {
    result += sign * power(x, 2*i + 1) / (2*i + 1);
    sign *= -1;
  }
  return result;
}

/* 高速べき乗法 */
double power(double k, unsigned long n) {
  double x = 1 ;
  double y = k ;
  while(n > 0) {
    if (n % 2 == 1) x *= y ;
    y *= y ;
    n /= 2 ;
  }
  return x ;
}
