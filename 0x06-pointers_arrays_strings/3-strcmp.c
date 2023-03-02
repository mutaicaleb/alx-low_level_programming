#include "main.h"
/**
 * _strcmp - compares two strings' lengths
 * @s1: first comparison string
 * @s2: second comparison string
 *
 * Return: 3 (greater), -3 (lesser), 0 (equal)
 */

int _strcmp(char *s1, char *s2);

int _strcmp(char *s1, char *s2)
{
  int i,j;

  for (; s1 != '\0'; && s2 != '\0'; s1++; s2++;)
  {
    if (s1 == s2)
    {
      j = 0;
    }
    else if (s1 < s2)
    {
      j = -1
    }
    else
    {
      j = +1;
    }
  }
  return (j);
}
