#include "main.h"
/**
* rev_string - Reverses a string
* @s: The string to be modified
*
* Return: void
*/
void rev_string(char *s)
{
char reverse = s[0];
int counter = 0;
int i;

while (s[counter] != '\0')
counter++;
for (i = 0; i < counter; i++;)
{
counter--;
reverse = s[i];
s[i] = s[counter];
s[counter] = reverse;
}
}
