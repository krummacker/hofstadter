#include <stdio.h>

// hof calculates the Hofstadter function value of the specified argument.
int hof(int x)
{
  if ((x == 1) || (x == 2))
    return 1;
  else
    return hof(x - hof(x - 1)) + hof(x - hof(x - 2));
}

int main()
{
  int limit = 42;

  printf("\nHofstadter function:");
  printf("\n");

  for (int loop = 1; loop <= limit; loop++)
  {
    printf("\nhof(%i) = %i", loop, hof(loop));
  }
  return 0;
}