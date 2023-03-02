#include "main.h"

int _strcmp(char *s1, char *s2);

int _strcmp(char *s1, char *s2)
{
  int i;

  for (; s1 != '\0'; && s2 != '\0'; s1++; s2++;)
  {
    if (s1 == s2)
    {
      _putchar("0");
    }
    else if (s1 < s2)
    {
      _putchar("-");
    }
    else
    {
      _putchar("+");
    }
  }
  return (0);
}
