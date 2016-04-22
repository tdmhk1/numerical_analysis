/**
 * -*- coding: utf-8 -*-
 * 二分法を用いてsqrt(2)の値を計算する
 */
 #include <stdio.h>
 #include <math.h>

 int main(int argc, char const *argv[]) {
   int i = 0;
   double lower, upper, sqrt2;

   lower = 0.0;
   upper = 2.0;
   while (lower < upper) {
     sqrt2 = (lower + upper)/2.0;
     printf("%3d %.40f\n", i+1, sqrt2);
     if (sqrt2 * sqrt2 > 2.0) {
       upper = sqrt2;
     } else {
       lower = sqrt2;
     }
     i += 1;
     if (i > 100) {
       break;
     }
   }
   return 0;
 }
