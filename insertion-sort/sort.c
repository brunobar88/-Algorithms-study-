#include <stdio.h>

void printNumberSet(int numbers[6]) {
  for (int index = 0; index < 6; index++) { 
    printf("%d ", numbers[index]);
  }

  printf("\n");
}

int main() {
  int numbers[6] = {65, 89, 12, 45, 2, 90}; // Declaração do conjunto a ser ordenado.

  // Primeiro loop que percorre cada elemento do array a partir do segundo.
  // Da direita para a esquerda
  for (int j = 1; j < 6; j++) {
    int key = numbers[j]; // Declaração da key(chave).

    int i = j - 1;

    // Segundo loop da esquerda para a direita a partir da posição da chave.
    while (i >= 0 && numbers[i] > key) { 
      numbers[i + 1] = numbers[i]; // Permutação de elmentos

      i = i - 1;
    }

    numbers[i + 1] = key; // Permutação de elmentos
  }

  // Função para imprimir o conjunto ordenado
  printNumberSet(numbers);  

  return 0;
}