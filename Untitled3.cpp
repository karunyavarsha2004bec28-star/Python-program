#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int left, right, isPalindrome = 1;
    printf("Enter a string: ");
    scanf("%s", str);
    left = 0;
    right = strlen(str) - 1;
    while (right > left) {
        if (str[left] != str[right]) {
            isPalindrome = 0; 
            break;
        }
        left++;
        right--;
    }
   if (isPalindrome) {
        printf("'%s' is a palindrome.\n", str);
    } else {
        printf("'%s' is NOT a palindrome.\n", str);
}
    return 0;
}

