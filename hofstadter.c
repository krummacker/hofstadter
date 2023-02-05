#include <stdio.h>
#include <time.h>

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
  time_t rawtime1, rawtime2;
  struct tm *timeinfo;

  printf("Hofstadter function\n");
  printf("===================\n\n");

  time(&rawtime1);
  timeinfo = localtime(&rawtime1);
  printf("Current local time and date: %s\n", asctime(timeinfo));

  for (int loop = 1; loop <= limit; loop++)
  {
    printf("hof(%i) = %i\n", loop, hof(loop));
  }

  time(&rawtime2);
  timeinfo = localtime(&rawtime2);
  printf("Current local time and date: %s", asctime(timeinfo));
  printf("Program execution took %ld seconds.\n", rawtime2 - rawtime1);

  return 0;
}