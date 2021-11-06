#include <stdio.h>
#include <ctype.h>

int
main ()
{
  char c,d;
  int check;
  printf ("Enter a character :\n");
  scanf ("%c", &c);
  if(islower(c)){
    d = toupper(c);
  }
  else{
    d = tolower(c);
  }
  printf ("%c has ASCII value %d and the opposite of it is %c", c, c, d);

  return 0;
}
