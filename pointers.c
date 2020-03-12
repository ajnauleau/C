
#include <stdio.h>

int main(void) {
  int age;
  int *address = &age;
  *address = 37;
  printf("%u", *address);
}




