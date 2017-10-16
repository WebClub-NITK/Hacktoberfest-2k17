#include <stdio.h>
#include <stdlib.h>
#define m 100
int main(){
    unsigned long long int i,j;
    int *primes;

    primes = malloc(sizeof(int) * m);

    for (i = 2;i < m; i++)
        primes[i] = 1;

    for (i = 2;i < m; i++)
        if (primes[i])
            for (j = i;i * j < m; j++)
                primes[i * j] = 0;

    printf("\nPrime numbers in range 1 to 100 are: \n");
    for (i = 2;i < m; i++)
        if (primes[i])
            printf("%d\n", i);

return 0;
}
