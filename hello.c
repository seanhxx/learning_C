#include <stdio.h>
/* #include <string.h> */

int strlen(char *s);
void main()
{
  /* int c, nl, b, tab; */
  /* nl = 0; */
  /* b = 0; */
  /* tab = 0; */
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

  /* while( (c = getchar()) != EOF){ */
  /*   if (c == '\t'){ */
  /*     putchar('\\'); */
  /*     putchar('t'); */
  /*       } else if (c == '\b'){ */
  /*     putchar('\\'); */
  /*     putchar('t'); */
  /*       } else if (c == '\\'){ */
  /*     putchar('\\'); */
  /*     putchar('\\'); */
  /*   } else{ */
  /*     putchar(c); */
  /*   } */
  /* } */

  /* char str[80]; */
  /* strcpy(str, "these "); */
  /* strcat(str, "strings "); */
  /* printf("%s\n",str); */

  /* int i,j; */
  /* for(i = 0; i < 100; ++i) */
  /*   printf("i is %d\n", i); */
  /* for(j=0; j<100; j++) */
  /*   printf("j is %d\n", j); */
  /* printf("i is %d and j is %d\n",i,j); */

  char a[] = "123";
  int c = *(&a+1) - a;

  printf("c = %d, len = %d\n",c,strlen(a+1));
  printf("this str is %s\n",a);
}

int strlen(char *s){
  int n;
  for (n=0;*s != '\0'; s++){
    n++;
    printf("str is %d\n",*s);
  }
  return n;
}
