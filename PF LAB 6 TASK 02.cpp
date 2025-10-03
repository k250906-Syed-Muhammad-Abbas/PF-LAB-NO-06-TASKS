#include <stdio.h>

int main() {
    int nnn, i, a, count = 0, sum = 0;

    printf("Enter a number till to print prime numbers:\t\t ");
    scanf("%d", &nnn);
    printf("\n\nThe prime numbers up to %d are:\t\t", nnn);

    for (i = 2; i <= nnn; i++) {
        int prime = 1; 

        for (a = 2; a < i; a++) {
            if (i % a == 0) {
                prime = 0; 
                break;
            }
        }

        if (prime) {
            printf("%d ", i);
            count++;
            sum += i;
        }
    }

    printf("\n\nThe total numbers of primes till %d are\t %d", nnn, count);
    printf("\n\nSum of all prime numbers till %d is\t\t%d", nnn, sum);

    return 0;
}

