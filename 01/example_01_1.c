/**
 * -*- coding: utf-8 -*-
 * 二分法を用いてsqrt(2)の値を計算する
 */
 #include <stdio.h>
 #include <math.h>
 #define MAX (10)

 int main(int argc, char const *argv[]) {
   double lower, upper, sqrt2;

   lower = 0.0;
   upper = 2.0;
   for (int i = 0; i < MAX; i++) {
     sqrt2 = (lower + upper) / 2.0;
     printf("%3d %.40f\n", i+1, sqrt2);
     if (sqrt2 * sqrt2 > 2.0) {
       upper = sqrt2;
     } else {
       lower = sqrt2;
     }
   }
   printf("    %.40f\n", M_SQRT2);
   return 0;
 }
