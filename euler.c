#include <stdio.h>
#include <stdlib.h>

void problem1 () {
  int sum,temp,inc;
  sum = 0; 
  for (temp = 0; temp < 1000; temp += 5) {
    sum += temp;
  }
  inc = 1;
  while (3 * inc < 1000) {
    if (inc % 5 != 0) {
      sum += (3*inc);
    }
    inc += 1;
  }    
  printf("Sum of all the multiples of 3 or 5 under 1000: %d\n",sum);
}

int main () {
  problem1();
  return 0;
}
