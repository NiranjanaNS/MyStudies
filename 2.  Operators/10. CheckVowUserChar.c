#include <stdio.h>
int main() {
    char a;
    printf("Enter an alphabet: ");
    scanf("%c", &a);
    if(a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
    printf("The alphabet is a vowel");
    else if(a != 'a' || a != 'e' || a != 'i' || a != 'o' || a != 'u')
    printf("The alphabet is a consonant");
    else 
    printf("ERROR");
    return 0;
}