#include <stdio.h>
/**
 * main - Main function
 * @argc: Counter
 * @argv: Pointer
 */
int main (argc, *argv[])
{
  int i;
  for (i = 0; i < argc; i++)
    {
      printf("%s\n", argv[i]);
    }
  return (0);
}
