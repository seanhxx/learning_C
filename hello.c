#include <stdio.h>

void main()
{
  int c, nl, b, tab;
  nl = 0;
  b = 0;
  tab = 0;
  /* while ((c = getchar()) != EOF){ */
  /*   if (c == '\n') */
  /*     ++nl; */
  /*   if (c == 32) */
  /*     ++b; */
  /*   if (c == 9) */
  /*     ++tab; */
  /* } */
  /* printf("%d, %d, %d\n", nl, b, tab); */

  /* while ((c = getchar()) != EOF){ */
  /*   if ( (!b) || c != ' ' ){ */
  /*     putchar(c); */
  /*   } */
  /*   b = (c == ' '); */
  /* } */

  /* while(1){ */
  /*   c = getchar(); */
  /*   printf("%d\n",c); */
  /* } */

  while( (c = getchar()) != EOF){
    if (c == '\t'){
      putchar('\\');
      putchar('t');
        } else if (c == '\b'){
      putchar('\\');
      putchar('t');
        } else if (c == '\\'){
      putchar('\\');
      putchar('\\');
    } else{
      putchar(c);
    }
  }
}
