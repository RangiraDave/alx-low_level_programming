#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_calloc - Allocates memory
 * @nmemb: Pointer to an unsigned int
 * @size: Pointer to unsigned integer
 * Return: Pointer to an array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
  char *p;
  unsigned int cnt;

  if (nmemb == 0 || size == 0)
    return (NULL);
  p = malloc(nmemb * size);
  if (p == NULL)
    return (NULL);
  cnt = 0;
  while (cnt < nmemb * size)
    {
      p[cnt] = 0;
      cnt++;
    }
  return (p);
}
