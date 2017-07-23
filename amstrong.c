#include <stdio.h>
int main()
{
    int number, n, remainder, result = 0;
 
    printf("Enter a three digit integer: ");
    scanf("%d", &number);
 
     n = number;
 
    while (n != 0)
    {
        remainder = n%10;
        result += remainder*remainder*remainder;
        n /= 10;
    }
 
    if(result == number)
        printf("%d is an Armstrong number.",number);
    else
        printf("%d is not an Armstrong number.",number);
 
    return 0;
}
