#include <stdio.h>
int fibonacci(int i)
{
    if (i == 0)
        return 0;
    else if (i == 1)
        return 1;
    else
        return (fibonacci(i - 1) + fibonacci(i - 2));
}
int main()
{
    int n;
    printf("Enter Number Upto which Fibonacci Series is needed : \n");
    scanf("%d", &n);
    printf("Fibonacci Series is: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d", fibonacci(i));
    }
    return 0;
}