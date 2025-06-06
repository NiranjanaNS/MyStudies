#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main() {
  int i;

  // Basic for loop: iterates from 0 to 9
  printf("Basic for loop:\n");
  for (i = 0; i < 10; i++) {
    printf("%d ", i);
  }
  printf("\n");

  // For loop with a time delay
  printf("For loop with a time delay:\n");
  for (i = 1; i <= 5; i++) {
    printf("Iteration %d\n", i);
    // Introduce a delay of 1 second
    sleep(1); 
  }
  printf("Loop finished.\n");

  return 0;
}