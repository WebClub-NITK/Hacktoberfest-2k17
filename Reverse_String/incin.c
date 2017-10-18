#include <stdio.h>
#include <string.h>

#define MAX_STRING 256

char *strrev(char *str) {
    char *p1, *p2;

    // Ensure the string exists and has data
    if (! str || ! *str)
        return str;

    // Flip the characters on the ends of the string, progressing inward towards the string center
    for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2) {
        *p1 ^= *p2;
        *p2 ^= *p1;
        *p1 ^= *p2;
    }

    return str;
}

void main() { 
    char str[MAX_STRING + 2]; // Two extra bytes, one for the newline (\n) and one for the NULL terminator
  
    printf("\nEnter String: ");
    fgets(str, MAX_STRING + 2, stdin);
  
    str[strlen(str) - 1] = (char)NULL;
  
    printf("Original: %s\n", str);
    printf("Reversed: %s\n", strrev(str));
    
    return 0;
}
