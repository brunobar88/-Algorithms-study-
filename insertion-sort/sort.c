#include <stdio.h>

int main() {
  int numbers[6] = {65, 89, 12, 45, 2, 90};

  for (int j = 1; j < 6; j++) {
    int key = numbers[j]; 

    int i = j - 1;

    while (i >= 0 && numbers[i] > key) {
      numbers[i + 1] = numbers[i];

      i = i - 1;
    }

    numbers[i + 1] = key;
  }

  for (int index = 0; index < 6; index++) { 
    printf("%d ", numbers[index]);
  }
  printf("\n");

  return 0;
}