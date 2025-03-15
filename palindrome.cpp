#include <stdio.h>
int main() 
{
    int n, original, rev = 0, dig;
    printf("Enter a number: ");
    scanf("%d", &n);
    original = n;
    while (n != 0) {
    dig = n % 10;
    rev = rev * 10 + dig;
    n/= 10;
    }
    if (original == rev)
    printf("The number is a palindrome.\n");
    else
    printf("The number is not a palindrome.\n");
    return 0;
}

