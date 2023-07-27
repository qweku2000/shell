#include "shell.h"

/**
 * hashtags - handle comments
 * @buff: user input;
 * Return:void
 */
void hashtags(char *input1)
{
  int i;

  for (i = 0; input1[i] != '\0'; i++)
    {
      if (input1[0] == '#')
        {
          printprompt();
        }
      else if (input1[i] == '#')
        {
          input1[i] = '\0';
          return;
        }
    }
}
