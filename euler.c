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

void problem2() {
  int sum,prev,tmp;
    int i = 1;
    prev = 0; 
    sum = 0;
    while (i < 4000000) {
        tmp = prev;
        prev = i;
        i += tmp;
        if (i % 2 == 0) {
            sum += i;
        }
    }
    printf("Sum is: %d\n",sum);
}
int main () {
  problem1();
  problem2();
  return 0;
}
