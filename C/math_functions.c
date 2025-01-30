#include <stdio.h>
#include <math.h>

int main(){
  double A = sqrt(9);
  double B = pow(2, 4); // pow(base, exponent)
  int C = round(3.14); // normal round
  int D = ceil(3.14); // always round up
  int E = floor(3.99); // always round down
  double F = fabs(-100);// absolute value; Betrag
  double G = log(3); // logarithm
  double H = sin(45);
  double I = cos(45);
  double J = tan(45);

  printf("%d %d %d", C, D, E);
}