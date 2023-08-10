#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - Allocates memory using malloc.
 * @b: The number of bytes to allocate.
 *
 * Return: success.
 */
void *malloc_checked(unsigned int b)
{
    void *ptr = malloc(b);

    if (ptr == NULL)
        exit(98);

    return ptr;
}
