#include <stdio.h>
int reverse(int n) {
    int rev = 0;
    while (n > 0) {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }
    return rev;
}

int isPalindrome(int n) {
    return n == reverse(n);
}

int main() {
    int num, revNum, sum;
    printf("Enter number: ");
    scanf("%d", &num);
    if (isPalindrome(num)) {
        printf("%d is a palindrome.\n", num);
        return 0;
    }

        while (1) {
        revNum = reverse(num);
        sum = num + revNum;
        
        printf("%d + %d = %d\n", num, revNum, sum);
        
        if (isPalindrome(sum)) {
            printf("\nPalindrome no: %d\n", sum);
            break;
        }
        num = sum;
    }

    return 0;
}

