#include <stdio.h>
int main() {
    char no, originalno, reversedno, rem;
    printf("Enter a number: ");
    scanf("%c", &no);
    originalno = no; 
    while (no != 0) {
        rem = no % 10;
        reversedno = reversedno * 10 + rem;
        no /= 10;
    }
    if (originalno== reversedno) {
        printf("%d is a palindrome\n", originalno);
    } else {
        printf("%d is not a palindrome\n", originalno);
    }
    return 0;
}











































