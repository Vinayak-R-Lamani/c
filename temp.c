#include <stdio.h>
#include <string.h>
#include <stdlib.h> // Include for malloc

int main()
{
    int i = 2;
    printf("%d, %d\n", ++i, ++i); // Undefined behavior, better to avoid multiple modifications

    char str[] = "vinayak";
    char *ptr = malloc(strlen(str) + 1); // Allocate memory for ptr

    if (ptr == NULL) {
        printf("Memory allocation failed.\n");
        return 1; // Exit if memory allocation fails
    }

    strcpy(ptr, str); // Copy the string into the allocated memory

    printf("%s %s\n", str, ptr); // Print both the original and copied strings

    free(ptr); // Free the allocated memory
    return 0;
}
