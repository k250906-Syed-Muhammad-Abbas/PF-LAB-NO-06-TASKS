#include <stdio.h>
int main()
{
    int n, i;
    int first = 0, second = 1, next;
    int sum = 0;

    printf("Enter number of terms for the FIBONACCI SEQUENCE:\t\t ");
    scanf("%d", &n);

    printf("Fibonacci sequence:\n\n");

    for (i = 1; i <= n; i++) {
        printf("%d ", first);   
        sum += first;           
        next = first + second;  
        first = second;         
        second = next;
    }

    printf("\nSum = %d\n", sum);

    return 0;
}

