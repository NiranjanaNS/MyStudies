#include <stdio.h>
int main() {
    int m;
    printf("Enter your mark: ");
    scanf("%d", &m);
    if(m >= 91 && m <= 100)
    printf("Grade 'A'\n");
    else if(m >= 71 && m <= 90)
    printf("Grade 'B'\n");
    else if(m >= 51 && m <= 70)
    printf("Grade 'C\n");
    else if(m <= 50)
    printf("F = Failed\n");
    else
    printf("Error\n");
    printf("Grade:\nA = 91 - 100\nB = 71 - 80\nC = 51 - 70\nF = < 50");
    return 0;
}