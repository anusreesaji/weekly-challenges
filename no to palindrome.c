/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>
int
pal (char a[])
{
  int l, i, j;
  l = strlen (a);
  for (i = 0, j = l - 1; i <= l / 2; i++, j--)
    {
      if (a[i] != a[j])
	{
	  return (-1);
	}

    }
  return (1);
}

int
main ()
{
  int s, i, j, l, n;
  char a[100000], b[100000];
  printf ("\nEnter:");
  scanf ("%s", a);
  l = strlen (a);
  for (j = 0; j < l; j++)
    {
      strncpy (b, a + j, l - j);
      b[l - j] = '\0';
      printf ("%s ", b);
      if (pal (b) == 1)
	{
	  break;
	}
    }
  printf ("\n%d", j);




  return 0;
}
