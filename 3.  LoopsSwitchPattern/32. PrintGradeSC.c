#include <stdio.h>
int main() {
    char grade;
    int mark;
    printf("Enter a mark: ");
    scanf("%c", &mark);
    switch (grade) {
    case 'A':
        mark >= 91 && mark <= 100;
        printf("%d", grade);
        break;
    case 'B':
        printf("Vowel");
        break;
    case 'C':
        printf("Vowel");
        break;
    case 'D':
        printf("Vowel");
        break;
    case 'F':
        printf("Vowel");
        break;
    default:
        printf("Consonant");
        break;
    }
  }