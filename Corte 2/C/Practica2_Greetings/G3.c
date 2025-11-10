#include <stdio.h>

int main() {
  char carName[] = "Toyota Corola";
  int i;
  
  for (i = 0; i < 13; ++i) {
    printf("%c\n", carName[i]);
  }

  return 0;
}
