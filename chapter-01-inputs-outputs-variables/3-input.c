#include<stdio.h>

int main()
{
    int a, b;
    printf("Enter the value of a\n");
    scanf("%d", &a);
    // Ampersand symbol means "address of"

    printf("Enter the value of a\n");
    scanf("%d", &b);

    printf("The sum of a and b is %d", a + b);
    return(0);
}