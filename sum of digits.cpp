#include <stdio.h>
int main() 
{
    int n,r, s=0, c=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n > 0) 
	{
    r= n % 10;
    s = s+r; 
    n= n/10;
    }
    printf("Sum of digits: %d\n", s);
    return 0;
}

