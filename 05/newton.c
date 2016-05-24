// Newton法を用いて、f(x)の根を計算する。
#include <stdio.h>
#include <math.h>
double f(double x, double a);
double df(double x);
#define EPSILON (4.0E-16)

int main(int argc, char **argv) {
  // 標準入力から平方根を求めたい正の実数を受け取る
  double a;
  scanf("%lf", &a);

  if (a < 0) {
    fprintf(stderr, "Input must be positive!\n");
    return -1;
  }

  double x = a;
  double x_new = x + f(x, a) / df(x);
  while (fabs(x_new - x) > EPSILON * fabs(x)) {
    x = x_new;
    x_new = x - f(x, a) / df(x);
  }
  printf("%.14e\n", x_new);
  return 0;
}

double f(double x, double a) {
  return x * x - a;
}

/* fの導関数 */
double df(double x) {
  return 2 * x;
}
