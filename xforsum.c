#include <math.h>

double pow(double x, double y);
double solve(double m)
{

int x;
int n;
char sequence;

n = 0;
sequence = 0;

  for (int i = n; i >= n; i++) {
    sequence = sequence + n*pow(x, n);
    if (m == sequence) {
      x = sequence;
      return x;
      break;
    };
   };

};