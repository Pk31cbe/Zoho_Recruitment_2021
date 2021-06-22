#include <stdio.h>
#include <string.h>

int
main ()
{
  char input[20] = "";
  scanf ("%s", &input);

  for (int i = 0; i < strlen (input); i++)
    {
      for (int j = i+1; j < strlen (input); j++)
	printf (" ");

      for(int j=0; j<=i; j++)
	{
	  int index =  j + strlen(input)/2;
	  if(index >= strlen(input)) index -= strlen(input) ;
	  printf ("%c", input[index]);
	}
      printf ("\n");
    }

  return 0;
}