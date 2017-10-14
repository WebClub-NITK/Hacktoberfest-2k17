//shushantkumar
#include <stdio.h>
#include <stdlib.h>

int main(){
    int *prime;
    prime = malloc(sizeof(int) * 1000);
    long int i,j;
    for (i = 2;i < 1000; i++)
        prime[i] = 1;

    for (i = 2;i < 1000; i++)
        if (prime[i])
            for (j = i;i * j < 1000; j++)
                prime[i * j] = 0;

    printf("Prime numbers in range 1 to 1000 are: \n");
    for (j = 2;j < 1000; j++)
        if (prime[j])
            printf("%d\n", j);

return 0;
}
